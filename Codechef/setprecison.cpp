#include<iostream>
#include<iomanip>
using namespace std;

int main()
{   int n;
	long double a,b,c;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		c=a/b;
		cout<<fixed<<setprecision(5)<<c<<'\n';
	}
return 0;
}
		
