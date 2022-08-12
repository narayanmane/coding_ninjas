long long decimalToOctal(int x)
{
	// Write your code here.
    long long temp=x;
    long sum=0,rem,i=1;
    while(temp>0)
    {
        rem=temp%8;
        sum=sum+i*rem;
        i=i*10;
        temp=temp/8;
    }
    return sum;
}
