#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[4][4],i,j,k,n=4;
	
	//INPUT
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
		   
   //ALGORITHM
   for(k=0;k<n;k++)
   {
	   for(i=0;i<n;i++)
	   {
		   for(j=0;j<n;j++)
		   {
			   arr[i][j]= min( arr[i][j], arr[i][k]+arr[k][j]);
		   }
	   }
   }
   
   //DISPLAY
   
   for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	cout<<endl;
	}
  
 return 0;
}
