#include<bits/stdc++.h>
int findKthElement(vector<vector<int>> matrix, int k) {
    // Write your code here.
    vector<int> v;
    int row=matrix.size(),col=matrix[0].size(), t=0,b=row-1,l=0,r=col-1,dir=0;
    if(row==0)
        return 0;
    while(l<=r && t<=b)
    {
        if(dir==0)
        {
            for(int i=l;i<=r;i++){
                v.push_back(matrix[t][i]);
            }
            dir=1;t++;
        }
        //right col
        else if(dir==1)
        {
            for(int i=t;i<=b;i++){
                v.push_back(matrix[i][r]);
            }
            dir=2;r--;
        }
        //bottom row
        else if(dir==2)
        {
            for(int i=r;i>=l;i--)
            {
                v.push_back(matrix[b][i]);
            }
            dir=3;b--;
        }
        else if(dir==3)
        {
            for(int i=b;i>=t;i--){
                v.push_back(matrix[i][l]);
            }
            dir=0;l++;
        }
    }
    
   return v[k-1];
}
