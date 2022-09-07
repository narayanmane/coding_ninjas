public class Solution 
{
    public static int peakValue(int[] arr)
	{
	    // Write your code here..
        for(int i=0;i<arr.length-1;i++)
        {
            if(arr[i]>arr[i+1])
                return i;
        }
        return arr.length-1;
    }

}
