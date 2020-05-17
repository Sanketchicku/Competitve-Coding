#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{ 
		int n,i,c=0,c1=0;
		string s,s1;
		cin>>n;
		cin>>s>>s1;
		for(i=0;i<n;i++)
		{
			if( s[i] == '0')
			c++;
			if( s1[i] =='0')
			c1++;
		}
		if(c ==c1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
return 0;
}
		
