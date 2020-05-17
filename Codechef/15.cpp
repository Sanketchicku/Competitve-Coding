#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

bool isPerfectSquare(long double z) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(z); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 
  
int main()
{   long long t;
	cin>>t;

	while(t--)
	{    long long z,m;
		//maximum amount;
		cin>>z;
			cout<<"\n";
		
		 if (isPerfectSquare(z) && (z+3)%3==0) 
		{
			m= (z+3)/3;
			cout<<m<<"  "<<m-1<<"  "<<m-2;
		}
		else if (!isPerfectSquare(z) && (z+3)%3==0)
		{
			cout<<0<<"  "<<0<<"  "<<0<<"  ";
		}
	}
return 0;
}
