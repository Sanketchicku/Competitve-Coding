#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long int n,m,i,num1=0,num2=0,count=0;
	cin>>n>>m;
	string s,str2;
	cin>>s;
	reverse(s.begin(), s.end()); 
	for(i=0;i<n;i++)
	{
		str2[i] = s[i];
	}
	for(i=0;i<n;i++)
	{
		if(s[i] == '_')
		s[i] = 0;
		else
		s[i] = s[i]-48;
   }
   for(i=0;i<n;i++)
	{
		if(str2[i] == '_')
		str2[i] = 1;
		else
		str2[i] = str2[i]-48;
	}
   for(i=0;i<n;i++)
   {
	  
	   num1= num1+ int(s[i])*pow(2, i);
	   num2= num2+ int(str2[i])*pow(2, i);
	   
   }
 
   
   for(i=num1;i<=num2;i++)
   {
	   if(i%m==0)
	   count++;
   }
   cout<<count<<endl;
}
   
}
