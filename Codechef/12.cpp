#include<iostream>
using namespace std;
int main()
{
	int n;
    cin>>n;
		   
		   while(n--)
		{   long long num,fact=1;
			//number
			cin>>num;
			while(num!=0)
			{
				fact = fact*num;
				num--;
			}
			cout<<fact<<"\n";
		}
	return 0;
}
				
