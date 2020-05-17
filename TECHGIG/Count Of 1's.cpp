#include<iostream>
using namespace std;
int count(int n);
long int arr[100000];
int main()
{
	
	long int n,i,n1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    n1 = count( n);
    cout<<n1;
    return 0;
}
		
		
int count( int n)
{
	// if last element of the array is 0,z no ones can
	// be present in it since it is sorted
	if (arr[n - 1] == 1) {
		return n;
	}

	// if first element of the array is 1, all its elements
	// are ones only since it is sorted
	if (arr[0] ==0) {
		return 0;
	}

	// divide array into left and right sub-array and recurse
	return count(n/2) + count( n - n/2);
}
