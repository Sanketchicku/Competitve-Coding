#include<iostream>
using namespace std;
int main()
{
	
	unsigned long long n,t,i,p,s=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>p;
			s += p;
		}
		cout<<s;
	}
return 0;
}
	
