#include<iostream>
using namespace std;
int sum(int);
int main()
{
	long long int t;
	cin>>t;
	while(t--)
   {
	unsigned long long int n,i=0,count =0;
	cin>>n;

    while(count!=n)
    {
		if(i>0 && sum(i)%10 ==0)
		{
			count++;
		}
		if(count!=n)
        i++;
        else if(count ==n)
        break;
	}
	cout<<i%1000000007<<endl;			
}
return 0;
}

int sum(int num)
{ 
	unsigned long long int s=0;
    while(num>0)
	{
		s=s+ num%10;
		num =num/10;
	}
    return s;
}
