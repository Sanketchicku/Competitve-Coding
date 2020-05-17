#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		
		for(int i=0;i<n-1;i++)
		{
		
			if( abs(arr[i+1]-arr[i])<=2 )
			arr[i]=11;
		}
		int c=1;
		int mi=1;
		int mx=1;
		
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
			if(arr[i]==11)
			c++;
			
			else
			{
				//cout<<c<<endl;
				if(c>1 and mi==1)
				mi=c;
				
				mi=min(mi,c);
				mx=max(mx,c);
				
				
				c=1;
			}
		}
		cout<<mi<<" "<<mx<<endl;
			
		}
	}

