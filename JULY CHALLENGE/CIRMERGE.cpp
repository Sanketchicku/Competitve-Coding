#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
    while(t--)
    {
		unsigned int n,num,i,min,j=0,pos=0;
		vector <unsigned int> v;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>num;
			v.push_back(num);
		}
		min=v[0]+v[1];
		while(j<n-1)
		 {
			
								for(i=0;i<n;i++)
								
								{   if(i==n-1)
									{
									 if( v[i] + v[0] <min)
									 {
										 min= v[n] + v[0];
										 pos= i;
									 }
									
									}
									else
									{
									 if(v[i]+v[i+1]<min)
									 {
									min = v[i] +v[i+1];
									pos= i;
									 }
									}
								}
							cout<<pos;
			
			
			 v.erase(v.begin()+(pos-1));
			//v.erase( v.begin()+(pos+1));
			
			
		
			
			
			for(i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
			j++;
	 }
	 
}
return 0;
}
		
