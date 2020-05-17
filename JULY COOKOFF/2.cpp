#include<iostream>
#include<vector>
using namespace std;
int sum(int);
vector<int>v;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,max=0,n,num,temp,sum1=0,tmpr1=0,tmpr2=0;
		
		
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>num;
			v.push_back(num);
		}
		max = sum(n);
		cout<<max<<" ";
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<=i+1;j++)
			{
				
				
				if(v[i] !=tmpr1 && v[j] !=tmpr2)
				{ 
				temp = v[i];
				
				tmpr1 = v[i];
				tmpr2 = v[j];
				
				v[i] = v[j];
				v[j] = temp;
				sum1 = sum(n);
			    }
				if(sum1>=max)
				max = sum1;
				else
				{
					if(v[i] !=tmpr1 && v[j]  !=tmpr2)
					{
					temp = v[j];
					
					tmpr1 = v[j];
					tmpr2 = v[i];
					
					v[j] = v[i];
					v[i] = temp;
				    }
				}
			}
		}
		cout<<max<<endl;
		for(i=0;i<n;i++)
		{
			
			cout<<v[i]<<" ";
		}
		
		v.clear();
	}	
return 0;
}

int sum( int n)
{
	int i,sum2=0;
	for(i=0;i<n;i++)
	{
		sum2 = sum2+ ((i+1)*v[i]);
	}
return sum2;
}

