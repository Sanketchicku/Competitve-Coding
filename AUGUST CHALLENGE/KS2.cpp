#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> v;
		int a=0,b=1,i,j,k,num,count=0,n;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>num;
			v.push_back(num);
		}
		for(i=0;i<n;i++)
		{
			a=1;
			for(j=i;j<n;j++)
			{   
				
				a = (a*v[j]);
				
			
				
			   
			   b=1; 
				for(k=j+1;k<n;k++)
				{
					
					b= (b*v[k]);
		
					
					cout<<a<<" "<<b<<endl;
				}
			}
			
		}
		cout<<count<<endl;
	}
return 0;
}

	
				
		

		
