#include <iostream> 
#include <vector>
using namespace std; 
// Recursive function to return gcd of a and b 
int gcd(long long int a, long long int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
   
// Driver program to test above function 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
    
    vector<long long int> v;
    long long int i,j,a=1,b=1,count=0,n,num;
    
    cin>>n;
    
    for(i=0;i<n;i++)
    {
		cin>>num;
		v.push_back(num);
	}
	
	
    for(i=0;i<n;i++)
    {
		a= v[i];
		b=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				
			b= b*v[j];
			
		    }
		}
		
		
      if(gcd(a,b) ==1)
      count++;
   }
   
   
  cout<<(count*2)%1000000007<<endl;
     }
 return 0; 
} 
