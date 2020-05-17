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
		int n,k,i,j,max=0;
		cin>>n>>k;
		int arr[n];
		int arr1[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i]>>arr1[i];
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if( (arr[i]-arr[j])>=k && arr1[i]>arr1[j] )
				{
					
						if(arr1[i]>max)
						max = arr1[i];
						else if(arr1[i]==max)
						max= max+ arr1[i];
			     }
				
					
				    else if ( (arr[i]-arr[j])>=k && arr1[j]>arr1[i] )
					{
					
					    if(arr1[j]>max)
						max = arr1[j];
						else if(arr1[j]==max)
						max= max+ arr1[j];
				     }
				 
				else if( (arr[j]-arr[i])>=k && arr1[i]>arr1[j])
				{
					
						if(arr1[i]>max)
						max = arr1[i];
						else if(arr1[i]==max)
						max= max+ arr1[i];
				}
				
					
				  else if ( (arr[j]-arr[i])>=k && arr1[j]>arr1[i])
					{
					
					    if(arr[j]>max)
						max = arr1[j];
						else if(arr[j]>=max)
						max= max+ arr1[j];
				     }
				}
           }
        
        
        cout<<max<<endl;
	}
return 0;
}
