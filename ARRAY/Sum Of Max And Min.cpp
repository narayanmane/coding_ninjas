
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
    int mx=arr[0],mn=arr[0];
    for(int i=1;i<n;i++)
    {
        mx=max(arr[i],mx);
        mn=min(arr[i],mn);
    }
    return mx+mn;
}
