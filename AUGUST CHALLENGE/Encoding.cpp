#include<iostream>
#include<math.h>
using namespace std;
long int calculate2(long int);
int main()
{
	int t;
	cin>>t;
    while(t--)
    {
		
		long int nl,l,nr,r,i,sum=0;
		cin>>nl>>l;
		cin>>nr>>r;
		for(i=l;i<=r;i++)
		{
			if(i<=10)
			{
		
			sum = sum+i;
		    }
			else
			{
			//p = calculate2(i);
		    //sum= sum+p;
		    sum+=calculate2(i);
		    }
		}
		cout<<sum%1000000007<<endl;
	}
return 0;
}

long int calculate2(long int n)
{
	long int c=0,s=0,q,temp;
    temp =n%10;
    while(q!=-1)
		{
			q = n%10;
			if(n==0)
			{
			q=-1;
			
		    }
		
			if(temp!=q)
			{
			s= s+ temp*pow(10,c-1);
			
		    }
			temp =q;
			
		    n=n/10;
		    c++;
		  } 
return s;
}

