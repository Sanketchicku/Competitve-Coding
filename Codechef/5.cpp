#include<iostream>
using namespace std;
int main()
{   
	signed int n,k,num;
	int temp=0; 
	cin>>n>>k;
	while(n-->0)
	{
		//input number
		cin>>num;
		if( (num%k)==0)
		temp=temp+1;
	}
	cout<<temp;
return 0;
}
