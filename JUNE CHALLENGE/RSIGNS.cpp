#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int k;
	cin>>k;
	cout<<pow(10,k);
	for(i=0;i<pow(k,10);i++)
	{
		check(i);
	}
}	
 
 void check(int i)
 {
	 p=i;
	 q = pow(10,k)-i-1;
	 while(p>0)
	 {
		 t = p%10;
		 a.push_back(t);
		 p=p/10;
	 }
	  while(q>0)
	 {
		 t1 = q%10;
		 b.push_back(t1);
		 q=q/10;
	 }
	  
		 
