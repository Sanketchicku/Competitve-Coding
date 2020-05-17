#include<iostream>
#include<algorithm>
#include <utility>
#include <boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
// Returns factorial of n 
cpp_int fact(cpp_int n) 
{ 
    cpp_int res = 1; 
    for (cpp_int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 
cpp_int nCr(cpp_int n,long long  int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cpp_int n,k,count=0,count1=0,i,j;
		cin>>n>>k;
		
		cpp_int arr[n];
		for(i=0;i<n;i++)
		cin>>arr[i];
		
		sort(arr,arr+n);
	
      
        for(i=0;i<n;i++)
        {
        if(arr[i] == arr[k-1])
        count1++;
       }
        for(j=0;j<k;j++)
        {
			if(arr[j] == arr[k-1])
			count++;
		}
	
		
		
		if(count>count1-count)
	    cout<<nCr(count1,count1-count)<<endl;
	    else
	    cout<<nCr(count1,count)<<endl;

	 }
	 
return 0;
}
