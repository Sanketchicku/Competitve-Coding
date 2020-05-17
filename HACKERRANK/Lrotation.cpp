/*#include<iostream>
using namespace std;
int main()
{
	long int arr[100000],i,n,d,p,num,temp;
	cin>>n>>d;
	
	for(i=0;i<n;i++)
	{
		cin>>num;
		arr[i] = num;
	}
    for(i=0;i<d;i++)
    {
		p=0;
		temp = arr[0];
		while(p<=n-1)
		{
			
			arr[p] = arr[p+1];
			if(p==n-1)
			arr[p] = temp;
			p++;
		}
	}
	for(i=0;i<n;i++)
	{
		
		cout<<arr[i]<<" "; 
	}
return 0;
}*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
  	for(int i=k;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<k;i++)
	{
		cout<<a[i]<<" ";
	}
    cout << endl;
    return 0;
}

