int countSubarrays(int n, vector<int> &arr){
    // Write your code here.
    int cnt=0;
    
    for(int i=0;i<arr.size();i++)
    {
       // sum+=arr[i];
        int sum=0;
        for(int j=i;j<arr.size();j++)
        { sum+=arr[j];
            if(sum==0)
                cnt++;
        }
    }
    
    return cnt;
}
