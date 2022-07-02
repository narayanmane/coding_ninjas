#include<bits/stdc++.h>
string toLowerCase(string &str){
    // Write your code here.
   /* for(int i=0;i<str.size();i++)
    {
     str[i]= tolower(str[i]);
    }*/
#----------------------second way----------------------------------------------------
     for(int i=0;i<str.size();i++){
         if(str[i]<'a')
         {
             str[i]+=32;
         }
     }
    return str;
}
