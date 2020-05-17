#include<iostream>
using namespace std;
int main()
{ 
	int test,S1,S2,p1=0,p2=0,diff=0,w;
	cin>>test;
	while(test--)
	{
		cin>>S1>>S2;
		p1  += S1;
		p2  += S2;
		
		if(p1>p2 && diff<p1-p2)
		{
		w=1;
		diff = p1-p2;
	    }
		else if(p2>p1 && diff < p2-p1)
        {
		w=2;
		diff = p2-p1;
	    }  
	}
	cout<<w<<" "<<diff;
}
