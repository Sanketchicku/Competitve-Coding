#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	long long arr[n];
	while(n--)
	{   
		for(i=0;i<3;i++)
		{
			cin>>arr[i];
		}
		long long high = arr[0],temp=arr[0];
		for(i=0;i<3;i++)
		{   
			if(arr[i]>high)
			{   temp= high;
				high = arr[i];
			
		     }
		     else if((arr[i]<high) && (arr[i]>temp))
		      {
               temp = arr[i];
              }
		 }
		 cout<<temp<<endl;
	 }
	 
	 return 0;
 } 
				
		
