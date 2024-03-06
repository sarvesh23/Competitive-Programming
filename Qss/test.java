import java.util.*;

public class test {
    public static int pall(String t) {
        int n = t.length();
        int re = 1;
        for (int i = 0; i < n / 2; i++) {
            if (t.charAt(i) != t.charAt(n - i-1))
                return 0;

        }
        return re;
    }

    public static void main(String[] args) {
        int s;
        Scanner sc = new Scanner(System.in);
        s = sc.nextInt();
        String st = Integer.toBinaryString(s);
        System.out.println(st);
        System.out.println(pall(st));
        sc.close();
    }
}
