import java.util.*;

public class IncrementalSievePrime {
    //Just traverse the odd numbers instead of all elements
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> odd = new ArrayList<Integer>();
        ArrayList<Integer> prime = new ArrayList<Integer>();
        int n=sc.nextInt();
        odd.add(2);
        for(int i=3;i<n;i+=2)
        {
            odd.add(i);
        }
        prime.add(2);
        for(int i=0;i<odd.size();i++)
        {   int c=odd.get(i);
            if(c!=-1)
            {
                prime.add(c);
                for(int j=i;j<odd.size();j++)
                {
                    if(odd.get(j)%c==0)
                    {
                        odd.set(j, -1);
                    }
                }
            }
           
            
        }
        for(int i=0;i<prime.size();i++)
        {
            System.out.println(prime.get(i));
        }
        sc.close();
    }
    
}
