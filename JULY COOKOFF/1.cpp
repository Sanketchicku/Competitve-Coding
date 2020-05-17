#include<iostream>
#include<vector>
using namespace std;
int sum(int);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,max=0,n,num,sum1=0;
		vector<int>v;
		
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>num;
			v.push_back(num);
		}
		max = sum(v[0]*v[1]);
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				int p = v[i] * v[j];
				sum1 = sum(p);
				if(sum1>= max)
					max = sum1;
				
			}
		}
		cout<<max<<endl;
		v.clear();
	}	
return 0;
}

int sum( int p)
{
	int temp,sum2=0;
	while(p>0)
	{
		temp = p%10;
		sum2= sum2+temp;
		p = p/10;
	}
return sum2;
}
