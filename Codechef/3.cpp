#include<iostream>

#include <boost/multiprecision/cpp_int.hpp> 
using namespace std;
using namespace boost::multiprecision;
int main()
{
	int128_t t,n;
	cin>>t;
	while(t-->0)
	{
		//ENTER NUMBER
		cin>>n;
		int128_t fact=1;
		while(n!=0)
		{
			fact=fact*n;
			n--;
		}
		cout<<fact<<"";
	}
return 0;
}
