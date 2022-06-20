
#include<bits/stdc++.h>
void help(int i , vector<int> &arr , int b,int sumtillnow,vector<int> subset,vector<vector<int>> &ans)
{
    if(sumtillnow==b){
        ans.push_back(subset);
        return;
    }
    if(sumtillnow>b)return;
    if(i>=arr.size())return;
    //skip 
    help(i+1,arr , b , sumtillnow,subset,ans);
    
    // select ith 
    sumtillnow+=arr[i];
    subset.push_back(arr[i]);
    help(i,arr,b,sumtillnow,subset,ans);
    sumtillnow-=arr[i];
    subset.pop_back();
    
}

vector<vector<int>> combSum(vector<int>& ARR, int B)
{   int sumtillnow=0;
    vector<int>subset;
    vector<vector<int>> ans;
 sort(ARR.begin(),ARR.end());
    help(0,ARR,B,sumtillnow,subset,ans);
 return ans;
	// Write your code here
	// Return a vector of sorted vectors/combinations
}
