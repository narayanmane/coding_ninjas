#include<bits/stdc++.h>
vector<int> countTheNumber(vector<int> &arr, int n, int k) {
	// Write your code here.
    vector<int>v;
    map<int,int>mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    for(auto itr : mp)
    {
        if(itr.second>=n/k)
            v.push_back(itr.first);
    }
    return v;
    
}
