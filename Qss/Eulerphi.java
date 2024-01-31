public class Eulerphi {
    static int phi(int n)
    {
        int result = n;
        for(int p=2;p*p<=n;++p)
        {
            if(n%p==0)
            {
                while(n%p==0)
                {
                    n/=p;
                }
                result-=result/p;
            }
        }
        if(n>1)
            result-=result/n;
        return result;
    }
    public static void main(String[] args) {
        //phi(n) =  n*(n-1/p1)(n-1/p2)... p1 ,p2 are prime factors of n
        int n=1000;
        System.out.println(phi(n));
    }
}
//2 5
//10 * (1-1/2) * (1-1/5)
