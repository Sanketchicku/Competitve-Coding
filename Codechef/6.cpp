#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main() 
{   int i,n;
    cin>>n;
    long long arr[n];
    //accepting value
    for(i=0;i<n;i++)
    {
		cin>>arr[i];
		
	} 
	
	
     //n = sizeof(arr)/sizeof(arr[0]); 
  
    sort(arr, arr+n); 
  
    //cout << "\nArray after sorting using "
         //"default sort is : \n"; 
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " "; 
  return 0; 
} 
