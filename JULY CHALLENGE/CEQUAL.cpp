#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		 long long int n,input,i,flag=0,k;
		 vector< long long int> v;
	     cin>>n>>k;
	   
		
		for(i=0;i<n;i++)
		{
			cin>>input;
			v.push_back(input);
		}
		sort(v.begin(),v.end());
		for(i=0;i<n && flag==0;)
		{
			
			if(v[n-1]+v[i]==k)
			{
				flag = 1;
				
				break;
			}
		     else if(v[n-1]+v[i]>k)
				n--;
				else
			   i++;
		    
		}
		if(flag==1)
		cout<<"Yes"<<endl;
		if(flag==0)
		cout<<"No"<<endl;
		
	v.clear();
		
     }
return 0;
    
    
 }
