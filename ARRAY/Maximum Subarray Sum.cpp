#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long currentsum=0;
    long long maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum=0;}
        maxsum=max(maxsum,currentsum);
        
    }
    
    return maxsum;
}
