#include<iostream>
using namespace std;
void status( unsigned long long int n, unsigned long long int a, unsigned long long int b, unsigned long long int k)
  {   unsigned long long int i;
	   unsigned int c1=0,c2=0;
	  for(i=1;i<=n;i++)
		{
			if( i%a==0 && i%b!=0)
			{
			c1++;
		    }
			
			else if( i%b==0 && i%a!=0)
			{
			c2++;
		} 
			
		}
		 
		 if( c1+c2 >= k)
		 {
			 cout<<"Win"<<" ";
		 }
		 else
		 {
			 cout<<"Lose"<<" ";
		 }
 }
int main()
{
	unsigned long long int a,b,n,k;
   int test;
	
	cin>>test;
	while(test--)
	{
	
		cin>>n>>a>>b>>k;
		status(n,a,b,k);
	}
		
return 0;
}
  
  
		
