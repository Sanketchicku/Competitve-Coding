#include<iostream>
#include<vector>
using namespace std;
int main()
{
	unsigned long long int t,n,k;
	cin>>t>>n>>k;
	while(t--)
	{   
		unsigned long long int i,a1,temp=0,count =0;
		vector<unsigned long long int>a;
		for(i=0;i<k;i++)
		{
			cin>>a1;
			a.push_back(a1);
			temp = temp+a[i];
			if(temp <= n)
			{
				count++;
			}
			
		}
	cout<<count<<endl;
		
	}
return 0;
}
