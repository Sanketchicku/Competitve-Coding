#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c,sum=0,a,i;
		cin>>n>>c;
        for(i=0;i<n;i++)
        {
			cin>>a;
			sum+= a;
		}
		if( (c-sum)>=0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
return 0;
}
			
