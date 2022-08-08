#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    int n=arr.size();
    int l=0,r=0;
    int sum=0;
    int maxlen=0;
    while(l<n && r<n)
    {
        sum+=arr[r];
        if(sum==0)
            maxlen=max(maxlen,r-l+1);
        r++;
        if(r==n)
        {
            l++;
            r=l;
            sum=0;
        }
    }
    return maxlen;
}
