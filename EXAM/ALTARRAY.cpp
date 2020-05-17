#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		int i,n,j;
		
		cin>>n;
		int v[n];
		for(i=0;i<n;i++)
		{
			cin>>v[i];
		
		}
        for(i=0;i<n;i++)
        {
			int q=1;
			for(j=i;j<n-1;j++)
	       {
	
			if(v[j]>0 && v[j+1]<0)
				q++;
			else if(v[j]<0 && v[j+1]>0)
			q++;
			
			else
			break;
		
	        }
			if(q>1)
			{
			for(i=q;i>=1;i--)
			cout<<i<<" ";
			i=i+q+1;
			}
			else
			cout<<1<<" ";
			
			
		}
   cout<<endl;
	}
	
return 0;
}



