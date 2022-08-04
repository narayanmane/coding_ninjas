#include<bits/stdc++.h>
vector<int> Klargest(vector<int> &a, int k, int n) {
    // Write your code here
    sort(a.begin(),a.end());
    vector<int>v;
    /*for(int i=k;i<n;i++)
    {
        v.push_back(a[i]);
        
    }*/
    v.assign(a.begin()+(n-k),a.end());
    return v;
}
