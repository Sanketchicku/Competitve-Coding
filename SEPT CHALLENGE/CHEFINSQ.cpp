#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,min=0,count=1,i,j;
		cin>>n>>k;
		
		int arr[n];
		for(i=0;i<n;i++)
		cin>>arr[i];
		
		sort(arr,arr+n);
		
        for(i=0;i<k;i++)
        min+= arr[i];
        
        for(i=0;i<k-1;i++)
        {
        for(j=0;j<n;j++)
        {
			if(arr[j] == arr[i])
			count++;
		}
	  }
		cout<<count/2<<endl;
	}
return 0;
}
