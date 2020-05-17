#include<iostream>
using namespace std;
int main()
{
	 int test,temp;
	long num;
	cin>>test;
	while(test--)
	{   temp=0;
		cin>>num;
		while(num>0)
		{   
			
			if(num%10==4)
			temp++;
			num = num/10;
			}
		cout<<temp;
	}
	return 0;
}
		
