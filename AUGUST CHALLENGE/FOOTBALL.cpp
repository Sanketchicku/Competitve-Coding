#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> a;
		int a=0,b=0,i,j,k,num,count=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>num;
			a.push_back(num);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{   
				a = (a^a[j]);
				for(k=j+1;k<n;k++)
				{
					b= (b^a[k]);
				}
			}
			
		   if(a==b)
		   count++;	
		}
		
		cout<<count<<endl;
		
				
		
	}
return 0;
}
		
	
