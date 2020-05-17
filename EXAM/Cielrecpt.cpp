#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0,total=0,i;
		string s;
		cin>>n;
		cin>>s;
		
		for(i=0;i<n;i++)
		{
			
			if(s[i]=='1')
			{
			++count;

            total += count;
		}
		}
		
		
		
		cout<<total<<endl;
      }
  return 0;
}
