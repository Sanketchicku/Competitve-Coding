#include<iostream>
using namespace std;
int main()
{   long long n,k,r;
	int left,i{1};
	cin>>n;
	cin>>k;
	cin>>r;
	left =n;
 
 while(k>= i*r)
 {
	 k = k-i*r;
	 left -=1;
	 i +=1;
 }
 cout<<left;
 return 0;
}
	 
	 
 
 
