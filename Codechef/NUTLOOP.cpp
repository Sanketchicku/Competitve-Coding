#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<unsigned int>j,j1;
    unsigned int i,t,a,n;
    cin>>t;
    while(t--)
    {
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a;
			j.push_back(a);
		}
		for(i=0;i<n;i++)
		{
			cin>>a;
			j1.push_back(a);
		}
		for(i=0;i<n;i++)
		{    
			if( j[i]*10+ j1[i] >= j1[i]*10+ j[i])
			cout<<j[i]*10+j1[i]<<"  ";
			else
			cout<<j1[i]*10+ j[i]<<"  ";
		}
	j.clear();
	j1.clear();
	cout<<"\n";
	}
return 0;
}
