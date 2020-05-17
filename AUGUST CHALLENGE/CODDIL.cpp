#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void check(int,int);
string s;
int p;
int main()
{
	
	int t,i;
	
	    cin>>t;
		
	
	while(t--)
	{
		int q=0;
		
		cin>>s;
		int p = s.length();
	
		for(i=0;i<p;i++)
		{
			if(s[i] =='1' )
		     q++;
		}
	
		if(q%2 ==0)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
return 0;
}
	
			
		
