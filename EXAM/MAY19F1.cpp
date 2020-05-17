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
		int n,q,i,num;
		vector<int> v;
		cin>>n>>q;
		for(i=0;i<n;i++)
		{
			cin>>num;
			v.push_back(num);
		}
		sort(v.begin(),v.end());
		
		for(i=0;i<q;i++)
		{
			cin>>num;
			cout<<v[num-1]<<endl;
		}
     }
   return 0;
}
