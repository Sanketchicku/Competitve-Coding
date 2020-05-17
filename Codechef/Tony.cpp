#include<iostream>
using namespace std;
int main()
{
	unsigned long long int n,t=0,temp=0, max=0,sum=0;
	cin>>n;
	while(n--)
	{   
		cin>>t;
		
		sum+= t;
		
		if(t%3 != 0){
		temp+=t;
		if(t>=max)
		max=t;
		}	
		
	}

	cout<<"temp="<<temp<<endl;
	cout<<"max="<<max<<endl;
	
	if(sum%3 != 0)
	cout<<"No"<<endl;
	else if(temp%3 == 0 && temp/3 >= max)
	cout<<"Yes"<<endl<<sum/3<<endl;
	else
	cout<<"No"<<endl;
	
    
  return 0;
}
