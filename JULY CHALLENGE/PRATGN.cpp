#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool getParity(unsigned int);
int main()
{
	
int t;
cin>>t;
while(t--)
{
	
  unsigned long long int k,i,q,a,odd=0,even=0;
  vector<long long int> v;
  cin>>q;
  for(i=0;i<q;i++)
  {
	 
	  
	  cin>>a;
	  if (find(v.begin(), v.end(),a)==v.end())
	  {
	  v.push_back(a);
			    if( getParity(a))
				  odd++;
				  else
				  even++;
	  }
	
			 
	  
	  k= v.size();
	  i=0;
	      if(k>1)
	      {
	        while(i!= k-1)
	        {
				if (find(v.begin(), v.end(),(v[k-1] ^ v[i]))==v.end())
				{
		     v.push_back(  v[k-1] ^ v[i]);
		         
		          if( getParity(v[k-1] ^ v[i]))
				  odd++;
				  else
				  even++;
			  }
		       i++;
	         }
          }
          
          cout<<even<<" "<<odd<<endl;
         
  }
  

v.clear();
}

return 0;
}
			  
		  

bool getParity(unsigned int n) 
{ 
    bool parity = 0; 
    while (n) 
    { 
        parity = !parity; 
        n     = n & (n - 1); 
    }      
    return parity; 
} 

			 
  
  
