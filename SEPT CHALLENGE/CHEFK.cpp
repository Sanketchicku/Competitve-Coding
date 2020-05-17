#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,min=0;
		cin>>n>>m;
		if(m<n-1)
		cout<<-1<<endl;
		else if(m==n-1)
	    cout<<1<<endl;
		else if(m==n || m==n+1)
		cout<<2<<endl;
		else
		{
		min= ((m)-(n+2))/n  + 1;
		cout<<min+2<<endl;
	     }
		
	
	}
return 0;
}
