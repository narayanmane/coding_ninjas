
public class Solution {
	public static long reverseNumber(long n) {
		// Write your code here
        long sum=0,rem;
        while(n>0)
        {
            rem=n%10;   // get last number
            sum=(sum*10)+rem;
            n=n/10; // remove the last number
        }
        return sum;
	}

}
