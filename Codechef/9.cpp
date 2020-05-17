#include <iostream>  
using namespace std;  
int main()  
{  
	int test;

cin>>test;
while(test--)
{
long long n, reverse=0, rem;
	 //cout<<"Enter a number: ";    
cin>>n;    
  while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;    
  }    
 cout<<reverse<<endl;
}    
return 0;  
}  
