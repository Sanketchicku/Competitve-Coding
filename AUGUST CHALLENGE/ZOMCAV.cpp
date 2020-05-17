#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,num,i,p,q,flag=1;
		vector<int>a;
		vector<int>b;
		vector<int>c;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>num;
			a.push_back(num);
		}
			for(i=0;i<n;i++)
		{
			cin>>num;
			b.push_back(num);
		}
		
		for(i=0;i<n+1;i++)
		{
			
			c.push_back(0);
		}
		for(i=0;i<n;i++)
		{
			  if(i-a[i]<0)
			  {
			  p=0;
			  c[p] = c[p]+1;
		      }
			  else 
			  {
			  p=i-a[i];
			  c[p] = c[p]+1;
		      }
			  if(i+a[i]>n-1)
			  {
			  q=n-1;
			  c[q+1] = c[q+1]-1;
		       }
			  else
		      {
			  q=i+a[i];
			  c[q+1] = c[q+1] -1;
		      }
				
		}
		
		for(i=1;i<n;i++)
		{
			c[i] = c[i]+c[i-1];
			
		}
		
		sort(c.begin(), c.end()-1);
		sort(b.begin(), b.end());
	
		for(i=0;i<n;i++)
		{
			
			if(b[i] != c[i])
			{
				flag=0;
				break;
			}
		}
		
		if(flag ==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}	
		
