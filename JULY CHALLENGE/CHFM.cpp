#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		 long long int i,n,num,p=0,pos;
		 double sum=0,s=0;
		vector <double> c;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>num;
			c.push_back(num);
			sum= sum+num;
		}
		s= sum/n;
		
	    
       for(i=n-1; i>=0; i--)
       {
		 
		    if( (sum-c[i])/(n-1) == s  )
		   {
			  
		        p = c[i];
		        if(c[i]<=p)
		        {
					//q= c[i];
					pos = i+1;
				}
		        
			   
	       }
	       
	       
	       
	   }
	   
	   if(p==0)
		   cout<<"Impossible"<<endl;
		else
		   cout<<pos<<endl;
		  
		 c.clear();
	   }
   }
