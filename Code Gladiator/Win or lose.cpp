#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<unsigned int>j,j1;
    unsigned int i,t,a,n,flag =1;
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
		sort(j.begin(),j.end()); 
		sort(j1.begin(),j1.end()); 
		for(i=0;i<n;i++)
		{
			if(j1[i] < j[i])
			flag = 0;
		}
		if(flag == 0 )
		cout<<"LOSE"<<endl;
		else
		cout<<"WIN"<<endl; 
		
		j.clear();
		j1.clear();
      }
     return 0;
  }
