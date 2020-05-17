#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int x,y,k;
		cin>>x>>y>>k;
		
		if( (x+y)%k ==0)
		cout<<"Chef"<<endl;
		else
		cout<<"Paja"<<endl;
	}
return 0;
}
		
		
