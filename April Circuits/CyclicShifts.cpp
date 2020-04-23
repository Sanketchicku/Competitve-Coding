#include<bits/stdc++.h>
using namespace std;

vector<int> decToBinary(int n,char c,int m) 
{ 
	vector<int>v;
	if (c=='L')
	{
		
		for (int i = 15-m; i >= 0; i--) { 
			int k = n >> i; 
			if (k & 1) 
				v.push_back(1);
				//cout << "1"; 
			else
				v.push_back(0);
				//cout << "0"; 
		} 
	
		for (int i = 15; i > 15-m; i--) { 
			int k = n >> i; 
			if (k & 1) 
				v.push_back(1);
				//cout << "1"; 
			else
				v.push_back(0);
				//cout << "0"; 
		}
	
	}
	else
	{
			
			for (int i = m-1; i >= 0; i--) { 
			int k = n >> i; 
			if (k & 1) 
				v.push_back(1);
				//cout << "1"; 
			else
				v.push_back(0);
				//cout << "0"; 
		}
	
		for (int i = 15; i >= m; i--) { 
			int k = n >> i; 
			if (k & 1) 
				v.push_back(1);
				//cout << "1"; 
			else
				v.push_back(0);
				//cout << "0"; 
		}
	} 
	
return v;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long int n,m,num=0;
	char c;
	
	cin>>n>>m>>c;
	
		vector<int> v=decToBinary(n,c,m);
		for(unsigned int i=0;i<v.size();i++)
		{
			
			num+=pow(2,15-i)*v[i];
			
		}
		cout<<num<<endl;
		
	}
	
}
