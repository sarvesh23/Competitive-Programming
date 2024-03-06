import java.util.*;
public class gcddd
{
    public static int gcdd(int a ,int b)
    {
        if(a==0)
            return b;
        return gcdd(b%a,a);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println(gcdd(a,b));
        sc.close();
    }
}