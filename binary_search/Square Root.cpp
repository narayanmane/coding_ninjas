#include<bits/stdc++.h>
int sqrtN(long long int N)
{
    // Write your code here.
    int start=0;
    int end=N;
    int ans=-1;
    long long mid=start+(end-start)/2;
    while(start<=end)
    {
        if(mid*mid==N)
        {
            return mid;
        }
        else if(mid*mid<N)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
