#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	
	int n,d,i,count=0,num;
    cin>>n>>d;
    vector<int> v;
    for(i=0;i<n;i++)
    {
		cin>>num;
		v.push_back(num);
	}
	sort(v.begin(),v.end());
	for(i=0;i<n-1;i++)
    {
		if(v[i+1] - v[i] <=d )
		i++;
		count++;
	}
	
	cout<<count<<endl;
return 0;
}

