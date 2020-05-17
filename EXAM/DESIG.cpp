#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int arr[n],i,j,p=0,min1=0,max1=0,max2=0,min2=1;
		
		for(i=0;i<n;i++)
		cin>>arr[i];
		
		
		for(i=0;i<n;i++)
		{
			
			p=0;
		for(j=i+1;j<n;j++)
		{
			   
				p = p+arr[j];
				if(j==i+1)
				min1 = min(arr[i], p+arr[i]);
				else
				min1 = min(min1, p);
				
		}
		  if(min1<min2)
		  min2=min1;
	}
	
	
		 
		for(i=0;i<n;i++)
		{
			
			p=0;
		for(j=i+1;j<n;j++)
		{
			   
				p = p+arr[j];
				if(j==i+1)
				max1 = max(arr[i], p+arr[i]);
				else
				max1 = max(max1, p);
				
		}
		      if(max1>max2)
		      max2=max1;
	}
	
	
	
	cout<<abs(max2-min2)<<endl;
    
	 }
	 
	 
return 0;
}
