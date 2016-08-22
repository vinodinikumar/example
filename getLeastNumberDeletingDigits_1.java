package guvi;

public class getLeastNumberDeletingDigits_1 {

public static String getLeastNumberDeletingDigits_1(String number, int k) {
    String leastNumber = number;
    while(k > 0 && leastNumber.length() > 0) {
        int firstDecreasingDigit = getFirstDecreasing(leastNumber);
        if(firstDecreasingDigit >= 0) {
            leastNumber = removeDigit(leastNumber, firstDecreasingDigit);
        }
        else {
            leastNumber = removeDigit(leastNumber, leastNumber.length() - 1);
        }

        --k;
    }

    return leastNumber;
}

private static int getFirstDecreasing(String number) {
    for(int i = 0; i < number.length() - 1; ++i) {
        int curDigit = number.charAt(i) - '0';
        int nextDigit = number.charAt(i + 1) - '0';
        if(curDigit > nextDigit) {
            return i;
        }
    }

    return -1;
}

private static String removeDigit(String number, int digitIndex) {
    String result = "";
    if(digitIndex > 0) {
        result = number.substring(0, digitIndex);
    }
    if(digitIndex < number.length() - 1) {
        result += number.substring(digitIndex + 1);
    }

    return result;
}
}
