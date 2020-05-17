#include<iostream>
using namespace std;
int main()
{
	int n,k,i,count=0;
	cin>>n>>k;
	for(i=n;i>=1;i--)
	{
		if(n%i ==0)
		count++;
		if(count ==k)
		{
		cout<<i<<endl;
		break;
	    }
	}
	return 0;
}
