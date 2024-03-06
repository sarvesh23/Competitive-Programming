import java.util.*;

public class Roman {
    public static int romanToInt(String s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'I') {
                sum += 1;
            }
            if (s.charAt(i) == 'V') {
                sum += 5;
            }
            if (s.charAt(i) == 'X') {
                sum += 10;
            }
            if (s.charAt(i) == 'L') {
                sum += 50;
            }
            if (s.charAt(i) == 'C') {
                sum += 100;
            }
            if (s.charAt(i) == 'D') {
                sum += 500;
            }
            if (s.charAt(i) == 'M') {
                sum += 1000;
            }
        }
        return sum;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.println(romanToInt(s));
        sc.close();
    }

}
