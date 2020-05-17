#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,i,q1;
		cin>>n>>q;
		int arr[n];
		int arr2[n];
		
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			arr2[i]=0;
		}
		
		arr2[0]=arr[0];
		for(i=1;i<n;i++)
		{
			
			arr2[i] = max(arr[i],arr2[i-1]);
		}
	
		
		while(q--)
		{
			cin>>q1;
			cout<<arr2[q1-1]<<endl;
		}
	}
return 0;
}
