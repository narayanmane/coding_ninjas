import java.util.ArrayList;

public class Solution {
    public static void divideByFour(ArrayList<Integer> arr){
        // Write your code here.
        for(int i=0;i<arr.size();i++)
        {
            arr.set(i,arr.get(i)/4);
            if(arr.get(i)==0)
                arr.set(i,-1);
        }
       /* for(int i=0;i<arr.length;i++)
        {
            if(arr.get(i)%!=0)
                arr.set[i]=0;
            else
                arr.set[i]=arr.get(i)/4;
        }
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i]+" ");
        }*/
    }
}
