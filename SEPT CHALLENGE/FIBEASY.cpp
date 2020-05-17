#include<iostream>
#include<vector>
using namespace std;
int isstable(int n);
int main()
{
	unsigned int t=5,sum1=0,sum2=0;
	while(t--)
   {
	
	int n,p1;
	
	cin>>n;
	p1 = isstable(n);	
	if(p1==1)
	sum1+= n;
	else
	sum2+= n;
	

   }
 cout<<sum1-sum2<<endl;
   
   
return 0;
}

int isstable(int n)
{
	int arr[]={0,0,0,0,0,0,0,0,0,0};
	int i,p;
	while(n!=0)
	{
		int ld=n%10;
		arr[ld-1]++;
		n=n/10;
	}
	
	for(i=0;i<9;i++)
	{
	   if(arr[i]!=0)
	    {
		p= arr[i];
		break;
	    }
    }
   
   for(i=0;i<9;i++)
   {
	   if(arr[i]!=0)
	   {
		   if(arr[i]!=p)
		   {
			   
			   p=-1;
			   break;
		   }
	   }
	}

if(p==-1)
return -1;
else
return 1;
}
