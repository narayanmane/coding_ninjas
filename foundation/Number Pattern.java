
public class Solution {
	public static String[] NumberPattern(int n) {

		// Write your code here
        String sum="";
        int count =0;
        String arr[]=new String[n];
        for(int i=0;i<n;i++)
        {   sum="";
            count=i;
            for(int j=0;j<=i;j++)
            { 
                 count=count+1;
                sum=sum+Integer.toString(count);
            }
            arr[i]=sum;
        }
        return arr;
	}

}
/*

1
23
345
4567

*/
