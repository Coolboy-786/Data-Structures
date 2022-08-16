string = my name is eshan

int fib(int n)
{
	if(n==0 || n==1)
	return n;
	
	else
	return fib(n-1)+fib(n-2);
}

int main()
{
	string str;
	getline(cin,str);
	int n=str.length();
	for(int i=0;i<n;i++)
	if(str[i]==" " && fib(i+1))
	for(int j=i+1,int k=;j<=k;j++,k--)
	{
		swap(str[j],str[k]);
	}
}


series = 7,13,25,45,75
6,12,20,30 ->6,8,10,12
series =4,11,19,41,_ ,161
