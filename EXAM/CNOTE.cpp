#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k,n,i,flag=0;
		cin>>x>>y>>k>>n;
		int page[n];
		int cost[n];
		for(i=0;i<n;i++)
		{
			cin>>page[i]>>cost[i];
		}
		
		for(i=0;i<n;i++)
		{
			if( page[i] >= (x-y) && cost[i]<=k)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<"UnluckyChef"<<endl;
		else
		cout<<"LuckyChef"<<endl;
	}
return 0;
}
				
