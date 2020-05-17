#include<iostream>
using namespace std;
int main()
{   signed int n,a,b,rem;
	cin>>n;
	while(n-->0)
	{
		cin>>a>>b;
		rem= a%b;
		cout<<rem;
	}
return 0;
}
