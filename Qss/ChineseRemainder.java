
import java.util.*;

//find the x value if remainder is given 
// x = a1 (mod m1   
// x = a2 (mod m2
// x = a3 (mod m3
// x= 2 mod 3
// x=3 mod 5
// x= 2 mod 7
// m1,m2,m3 should always be relativelt prime
//X = (a1 * M1 * y1 + y2 * a2 * M2 + y3 * a3 * M3) mod M
// input is a1 2    m1 3
//          a2 3    m2 5
//          a3 2    m3 7
// M =m1*m2*m3
// M1=M/m1 M2 = M/m2 M3=M/m3
// Now need to find Y1 * M1 = 1 mod m1
class ChineseRemainder {
    static int findMinX(int num[], int rem[], int k) {
        int x = 1;
        while (true) {
            int j;
            for (j = 0; j < k; j++)
                if (x % num[j] != rem[j])
                    break;
            if (j == k)
                return x;
            x++;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number ofcongruence relations: ");
        int size = sc.nextInt();
        System.out.println("Enter the values of a:");
        int a[] = new int[size];
        for (int i = 0; i < size; i++)
            a[i] = sc.nextInt();
        System.out.println("Enter the values of m:");
        int m[] = new int[size];
        for (int i = 0; i < size; i++) {
            m[i] = sc.nextInt();
        }
        System.out.println("x is " + findMinX(a, m, size));
        sc.close();
    }
}