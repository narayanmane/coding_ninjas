#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
    int n,temp,rem,i=0,des=0;
    cin>>n;
    temp=n;
    while(temp>0)
    {
        rem=temp%10;
        des=des+rem*pow(2,i);
        i++;
        temp=temp/10;
    }
	cout<<des;
}
