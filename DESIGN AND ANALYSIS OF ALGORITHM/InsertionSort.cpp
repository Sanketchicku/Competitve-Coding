#include<iostream>
using namespace std;


void Insertion_Sort(int arr[],int n)
{
	
	int i,j,key;
	for(i=1;i<n;i++)
	{
		j= i-1;
		key = arr[i];
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j= j-1;
		}
		arr[j+1] = key;
		//cout<<"arr"<<j+1<<"="<<arr[j+1]<<endl;
	}
}
		

int main()
{
	
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	Insertion_Sort(arr,n);
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	

return 0;
}
