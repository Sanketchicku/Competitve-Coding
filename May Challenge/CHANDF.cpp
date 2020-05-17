#include<bits/stdc++.h>
using namespace std;
int main()
{
	
		long long int t;
		cin>>t;
		while(t--)
		{
			long long int x,y,l,r,z;
			cin>>x>>y>>l>>r;
			
			z=(x|y);
			
			if(min(x,y)==0)
			cout<<0<<"\n";
			
			else if(z<=r)
			cout<<z<<"\n";
			
			else
			{
				cout<<powl(2, int(log((max(x,y)))+1 ))-1<<"\n";
			}
			
			/*//l=max(x,y)*2;
			for(i=0;i<=r;i++)
			{
			
				if((x&i)*(y&i)>p)
				{
				p=(x&i)*(y&i);
				num=i;
				}
			}
			cout<<num<<endl;*/
			
			
		}
				
return 0;		
			
}
