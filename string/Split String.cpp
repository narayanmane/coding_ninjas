bool splitString(string &str){
    // Write your code here.
    int n=str.size();
    int first=0,second=0;
    for(int i=0;i<n/2;i++)
    {
        if(str[i]=='a' || str[i]=='u' || str[i]=='i' || str[i]=='o' || str[i]=='e'  ||
          str[i]=='A' || str[i]=='U' || str[i]=='I' || str[i]=='O' || str[i]=='E')
        {
            first++;
        }
    }
       for(int i=n/2;i<n;i++)
    {
         if(str[i]=='a' || str[i]=='u' || str[i]=='i' || str[i]=='o' || str[i]=='e' ||
          str[i]=='A' || str[i]=='U' || str[i]=='I' || str[i]=='O' || str[i]=='E')
        {
            second++;
        }
    }
    if(first==second)
        return true;
    else
        return false;
    
}
