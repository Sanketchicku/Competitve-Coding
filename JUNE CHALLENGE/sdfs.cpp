#include <bits/stdc++.h> 
using namespace std; 
  
int findNth(int n) 
{ 
    int count = 0; 
  
    for (int curr = 19;; curr += 9) { 
  
 
        int sum = 0; 
        for (int x = curr; x > 0; x = x / 10) 
            sum = sum + x % 10; 
  
        if (sum%10 == 0) 
            count++; 
  
         
        if (count == n) 
            return curr; 
    } 
}
int main() 
{ 
	int t,i;
	cin>>t;
	while(t--)
	{
	cin>>i;
    cout << findNth(i) << endl; 
    }
    return 0; 
} 
  
