#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,i,q1,max;
		cin>>n>>q;
		int arr[n];

		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		max = arr[0];

		cout<<"q="<<q<<endl;
		for(i=0;i<q;i++)
		{
			cin>>q1;

			for(i=0;i<q1;i++)
			{
				if(arr[i]>max)
				max=arr[i];
			}
			cout<<max<<endl;
		}
	}
return 0;
}
