import java.util.*;
public class Prime {

	public static void main(String[] args) {
		
		/* Your class should be named Solution.
	 	* Read input as specified in the question.
	 	* Print output as specified in the question.
		*/
		Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        sc.close();
        //System.out.println(n);
        boolean[] b = new boolean[n];
        for(int i=0;i<n;i++)
        {
            b[i]=true;// default value as true
                        // eliminate the non prime numbers bu making them false
        }
        b[0]=false;//cn exclude also
        b[1]=false;
        for(int i=2;i<=Math.sqrt(n);i++)
        {   if(b[i]==true)
            {
                for(int j=i*i;j<n;j+=i)
                {
                    b[j]=false;
                }
            }
            
        }
        for(int i=2;i<n;i++)
        {
            if(b[i]==true)
                System.out.println(i);
        }
		int falg=0;
		for(int i=2;i<=Math.sqrt(n);i++)
		{
			if(n%i==0)
			{
				falg=1;
			}
		}
		if(falg==0)
			System.out.println(n);
    }
    
	}
