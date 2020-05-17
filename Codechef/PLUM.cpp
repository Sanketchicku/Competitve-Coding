#include<iostream>
#include<string>
using namespace std;
int main()
{
	typedef unsigned long long int lint;
	lint i,temp=0;
	char str1[10];
	char str2[10];
	cin>>str1;
    cin>>str2;
	for(i=0;i<10;i++)
	{
		if( str1[i] != str2[i])
		temp++;
		
		cout<<"s1="<<str1[i]<<endl;
		cout<<"s2="<<str2[i]<<endl;
		cout<<temp<<endl;
		
	}
	cout<<temp;
return 0;
}
