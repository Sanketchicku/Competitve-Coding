#include<iostream>
using namespace std;
void Selection_Sort(int arr[],int n, int start);
void swap(int arr[],int min,int start);
int main()
{
	
	int n,i,start=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	Selection_Sort(arr,n,start=0);
	
	
	

return 0;
}
void Selection_Sort(int arr[],int n, int start)
{
	int i,min;
	min=arr[start];
	if(start >= n-1)
	return;
	

	else
	{
	
	  for(i=start; i<n; i++)
	  {
		  if(arr[i] <min)
		  {
		  min =i;
	      }
	  }
	  cout<<"min="<<arr[min]<<" ";
	  swap(arr,min,start);
	   for(i=0;i<n;i++)
	  cout<<arr[i]<<" ";
	  cout<<"\n";
	  
	   
   }
       
	   Selection_Sort( arr, n,  start+1);
	  
	
	

}

void swap(int arr[],int min, int start)
{
	int temp=0;
	   temp = arr[start];
	   arr[start] = arr[min];
	   arr[min] = temp;
 }
