#include <iostream>
#include <vector>
#include <array>

using namespace std;


long int b(long int n){
	long int i;
	vector <long int> a;
	
	a.push_back(1);
	a.push_back(3);
		
	for(i=2;i<n;i++){
		a.push_back(2*a[i-1]-a[i-2]+1);
	}
	
	return a[n-1];
}



long int b1(long int n){
	long int i;
	array <long int, 10> a;
	
	a[0]=1;
	a[1]=3;
		
	for(i=2;i<n;i++){
		a[i]=2*a[i-1]-a[i-2]+1;
	}
	
	return a[n-1];
}



int main()

{
	long int test;
	cin>>test;
	while (test--)
	{
		long int n;
		cin>>n;
		cout<<b(n)<<endl;
	}
	return 0;
}
