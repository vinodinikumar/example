package array;

import java.util.Scanner;


public class Array {

   
    public static void main(String[] args) {
      char a1,a2,a3;int pos,count=0,count1=0;
        StringBuilder s1 = new StringBuilder("Thala");
        while(!"________".equals(s)) {
            System.out.println(s);
            for (int i=1;i<=s.length();i++)
                System.out.print(i);
            for (int i=0;i<s.length();i++)
                while('H' == s.charAt(i))
                    count=1;
            while(count==0)
                break;
            count=0;

            System.out.println("\nEnter the position to delete:");
            Scanner sc = new Scanner(System.in);
            pos = sc.nextInt();
            pos = pos - 1;

            if (pos <= s.length())
            {

                if (s.charAt(pos) == 'T' || s.charAt(pos) == '_') {
                    System.out.println("You are entered the tail position or already deleted position " +
                            " Please enter the head position or unremoved position to remove");

                } else {

                    if (pos <= 0) {
                      
                        a1 = s.charAt(pos);
                        a2 = s.charAt(pos + 1);
                    } else if (pos >= s.length() - 1) {
                        a1 = s.charAt(pos - 1);
                        a2 = s.charAt(pos);
                    } else {
                        a1 = s.charAt(pos - 1);
                        a2 = s.charAt(pos + 1);
                    }


                    switch (a1) {
                        case 'H':
                            s.setCharAt(getpos((pos - 1), s), 'T');
                            break;
                        case 'T':
                            s.setCharAt(getpos((pos - 1), s), 'H');
                            break;
                    }
                    switch (a2) {
                        case 'H':
                            s.setCharAt(getpos(pos + 1, s), 'T');
                            break;
                        case 'T':
                            s.setCharAt(getpos(pos + 1, s), 'H');
                            break;
                    }
                    s.setCharAt(pos, '_');
                }

            }
            else
            {
                System.out.println("Please enter only available position to delete");
            }

        }
        for (int i=0;i<s.length();i++)
        {
        if (s.charAt(i)=='_')
            count1++;
        }
        if (count1==s.length())
            System.out.println("\nCongrats..You Have Won the game");
        else
            System.out.println(count1+s.length()+"\nThere is no way.  You have to accept that you are failed");

}


    private static int getpos(int i,StringBuilder s) {
            if(i<=0)
                return 0;
        else if (i>=s.length())
                return i-1;
        else
                return i;

    }
}
