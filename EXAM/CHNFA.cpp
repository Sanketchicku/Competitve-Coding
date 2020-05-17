#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p,i,num,count=0;
		cin>>n>>p;
		for(i=0;i<n;i++)
		{
			cin>>num;
			if( (num+p)% 7 ==0)
			count++;
		}
		cout<<count<<endl;
	}
return 0;
}
