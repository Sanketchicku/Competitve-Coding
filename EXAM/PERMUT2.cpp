#include<iostream>
using namespace std;
int main()
{
	while(1)
	{
	int n,i,j,p=1,flag=1;
	cin>>n;
	if(n==0)
	break;
	int arr[n];
	int arr1[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		
			 for(j=0;j<n;j++)
			 {
			 if(arr[j] ==p)
			 {
			 arr1[i] = j+1;
			 p++;
			 break;
		     }
			}
		     
	}
	
	
	for(i=0;i<n;i++)
	{
		
	 if(arr[i] != arr1[i])
	 {
		 flag=0;
		 break;
	 }
 
	 }
	 
	 if(flag==1)
	 cout<<"ambiguous"<<endl;
	 else
	 cout<<"not ambiguous"<<endl;
	 
 }
	 
 return 0;
}
