#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,tot=0,tot1=0,num,tot3=0,tot2=0,tot4=0,p,q;
		
		vector<int> v;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>num;
			tot = tot+num;
			v.push_back(num);
		}
	
		sort(v.begin(),v.end());
		for(i=0;i<k;i++)
		{
			tot1= tot1+ v[i];
		}
		for(i=n-1;i>=n-k;i--)
		{
			tot2 = tot2+v[i];
		}
		
		tot3= tot-tot1;

	
		tot4 = tot-tot2;
		
		p=abs(tot3-tot1);
		q=abs(tot4-tot2);
		if(p>q)
		cout<<p<<endl;
		else
		cout<<q<<endl;
	}
return 0;
}
		
