#include<iostream>
using namespace std;
int main()
{
	long long int n,s=0,s1=0,i,num;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		s1 = s1 +(i+1);
		s = s+num;
	}
	
   if(s==s1)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
return 0;
}
