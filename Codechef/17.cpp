#include<iostream>
using namespace std;
int main()
{
	int test,diff,p1,p2,a,b,i;
	int arr1[100],arr2[100];
	cin>>test;
	for(i=0;i<test;i++)
	{
		cin>>a>>b;
		p1=a,p2=b;
		p1=p1+a;
		p2=p2+b;
		//if(p1>p2)
		//{
			arr1[i] = p1;
		//}
		//else
		//{
			arr2[i] = p2;
		//}
	}
	//Compare
	 diff = arr1[0]-arr2[0];
	for(i=0;i<test;i++)
	{
		if((arr1[i]-arr2[i])>diff)
		{    
			diff = arr1[i]-arr2[i];
			cout<<"1"<<"  "<<diff;
		}
		else if ((arr2[i]- arr1[i])>diff)
		{
             diff = arr2[i]-arr1[i];
			 cout<<"2"<<"  "<<diff;   			
		}
	}
return 0;	
}
		
