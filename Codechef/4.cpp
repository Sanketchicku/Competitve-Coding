#include<iostream>
using namespace std;
int main()
{   //x=transacted balance y=initial balace
	float x,y;
	cout<<"Enter amount you want to withdraw and initial balance\n";
	cin>>x>>y;
	if(x>y && x>0)
    {
	  cout<<y;
    }
    else if(x==0)
    {
		cout<<"invalid operation";
	}
	else
	{
	   if(int(x)%5==0)
	   {
		  y= y-x-0.50;
		 cout<<y;
	   }
	   else 
	   {
		 cout<<y;
	   }
   }
  
return 0;
}
