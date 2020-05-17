#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	vector<vector<int> > vect;
	int rows,col,i,last=0,x,y,type,seq;
	cin>>rows>>col;
	vect.resize(rows,vector<int>(col));
	map<int,int>m;
	
	for(i=0;i<rows;i++)
	{

		m.insert(pair<int,int>(i,0));
	}
	while(col--)
	{
		cin>>type>>x>>y;
		if(type==1)
		{
			seq=(x+last)%rows;
			vect[seq][m[seq]]=y;
			m[seq]+=1;
			last=seq;
		}
			
	    else
	    {
			seq=(x+last)%rows;
			last= y%(m[seq]);
			cout<<last<<endl;
		}
	}
			
return 0;
}
			
