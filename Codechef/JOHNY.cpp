#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	 vector<unsigned int>j;
	 unsigned long long int i,a,n,k,t,temp=0;
	 cin>>t;
	 while(t--)
	 {
	 cin>>n;
	 for(i=1;i<=n;i++)
	 {
		 cin>>a;
		 j.push_back(a);
	 }
	 cin>>k;
	 temp = j[k-1];
	 sort(j.begin(), j.end());
	 for(i=0;i<n;i++)
	 { 
		  cout<<"j"<<i<<" = " <<j[i]<<endl;
		  cout<<"temp="<<temp<<endl;
		 if( j[i] == temp)
		 {
			 
		 cout<<i+1;
		 break;
	     }
	 }
 
 j.clear();
}
 return 0;
 }
	
