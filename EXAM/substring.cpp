#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int count=0,n,i;
		cin>>n;
		cin>>s;
		for(i=0;i<n;i++)

		{
			if(s[i] =='1')
			count++;
			
		}
		cout<<(count*(count+1))/2<<endl;
	}
return 0;
}
