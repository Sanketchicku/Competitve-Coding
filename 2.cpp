#include<bits/stdc++.h>
using namespace std;
double distance(double x1, double y1, double x2, double y2) 
{ 
    // Calculating distance 
    return sqrt(pow(x2 - x1, 2) +  
                pow(y2 - y1, 2) * 1.0); 
} 

int main()
{
 long long int t;
 cin>>t;
 while(t--)
 {
	 double x1,y1,x,y,dista=0,dist2=0,dist;
	 long long int n,m,k,i,j,p;
	 
	 vector<int>v1;
	 vector<int>v2;
	 vector<int>v3;
	 
	 cin>>x1>>y1;
	 
	 cin>>n>>m>>k;
	 
	 for(i=0;i<n;i++)
	 {
		 cin>>x>>y;
		 v1.push_back(x);
		 v1.push_back(y);
	 }
		 
	 for(i=0;i<m;i++)
	 {
		 cin>>x>>y;
		 v2.push_back(x);
		 v2.push_back(y);
	 }
	 
	 for(i=0;i<k;i++)
	 {
		 cin>>x>>y;
		 v3.push_back(x);
		 v3.push_back(y);
	 }
	 dist=distance(x1,y1,v1[0],v1[1])+distance(v1[0],v1[1],v2[0],v2[1])+distance(v2[0],v2[1],v3[0],v3[1]);
	 
	 for(i=0;i<n;i++)
	 {
		 dista=distance(x1,y1,v1[i*2],v1[(i*2)+1]);
		 for(j=0;j<m;j++)
		 {
			dist2=dista+distance(v1[i*2],v1[(i*2)+1],v2[j*2],v2[(j*2)+1]);
			for(p=0;p<k;p++)
			{
				if(dist2+distance(v2[j*2],v2[(j*2)+1],v3[p*2],v3[(p*2)+1])<dist)
			    {
				dist= dist2+distance(v2[j*2],v2[(j*2)+1],v3[p*2],v3[(p*2)+1]);
				//cout<<"a="<<v3[p*2]<<"b="<<v3[(p*2)+1]<<endl;
				//cout<<"dist="<<dist<<endl;
			    }
			}
		}
		  
	  }
	  dista=0;
	  dist2=0;
	  
	 for(i=0;i<m;i++)
	 {
		 dista=distance(x1,y1,v2[i*2],v2[(i*2)+1]);
		 for(j=0;j<n;j++)
		 {
			 dist2=dista+distance(v2[i*2],v2[(i*2)+1],v1[j*2],v1[(j*2)+1]);
		     for(p=0;p<k;p++)
			{
				if(dist2+distance(v1[j*2],v1[(j*2)+1],v3[p*2],v3[(p*2)+1])<dist)
				{
				dist= dist2+distance(v1[j*2],v1[(j*2)+1],v3[p*2],v3[(p*2)+1]);
				//cout<<"dist="<<dist<<endl;
			    }
			}
		}
	  }
	  
	 
	  
	  
	  //cout<<"c1="<<c1<<"c2="<<c2<<"dist="<<dist<<endl;
	  cout<< fixed << setprecision(10)<<dist<<endl;
  }
}
