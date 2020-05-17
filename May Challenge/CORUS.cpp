#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int i,t,q,n;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>n>>q;
		cin>>s;
		map<char,int>m;
		map<char,int>:: iterator itr;
		
		for(i=0;i<s.size();i++)
		{
			if(m.find(s[i])==m.end())
			m[s[i]]=1;
			else
			m[s[i]]++;
		}
		long long int si,sum=0;
		for(i=0;i<q;i++)
		{
			sum=0;
			cin>>si;
			for(itr=m.begin();itr!=m.end();itr++)
		{
			long long int p=itr->second;
			if(p>si)
			sum+=(p-si);
		}
		
			cout<<sum<<endl;
		}
	
	}	
			
			
}
