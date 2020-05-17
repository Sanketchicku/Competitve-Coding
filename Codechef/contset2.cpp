#include<iostream>
#include<vector>
#include<set> 
#include<string>
using namespace std;
void getvalue(unsigned int);
vector<string> S;

int main()
{  
	unsigned int n,test;
	cin>>test;
	while(test--)
	{
	cin>>n;
	getvalue(n);
    }
return 0;
}
void getvalue(unsigned int n)
{
	unsigned int i;
	string str;
   for(i=1;i<=n;i++)
	{
		cin>>str;
		S.push_back(str);
	}
   
 

   S.clear();
   
}
