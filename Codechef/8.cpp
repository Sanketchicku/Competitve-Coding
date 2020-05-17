#include<iostream>
using namespace std;
int main()
{
	long long num,first,last,n;
	cin>>n;
	while(n--)
	{
		cin>>num;
		if(num>10)
	{
		last=num%10;
		while(num>0)
		{
			first=num%10;
			num = num/10;
		}
		int sum =first+last;
		cout<<sum<<"\n";
	}
	else
	{
		cout<<num;
	}
}
return 0;
}
	
