#include<iostream>
using namespace std;
int main()
{
	string s;
	int t;
	cin>>t;
	while(t--)
    {
		int i,min=0,d;
		//,j=0;
	    float p=0;
	
		cin>>d;
		cin>>s;
		
	  for(i=0;i<d;i++)
	        {
		     if(s[i] == 'P')
	
			  p++;
	       }
	      
	     for(i=2;i<d-2;i++)
	     {
		            if(float(p/d)<0.75)
		            {
					
		            
		                
					    
						 if ( (s[i-1] || s[i-2]== 'P') && ( s[i+1] || s[i+2]=='P') && s[i]=='A') 
						 {
							
							++p;
							++min;
							if(float(p/d)>=0.75)
	                        break;
							
						}
					
					}
					
			}
	     
	       /*while( (p/d) < 0.75)
	           {
		 
		
					if( j>1 && j<d-2)
					{
					 if( (s[j-1] || s[j-2]=='P') || ( s[j+1] || s[j+2]=='P') )
					 {
						++p;
						++min;
						if(p/d>=0.75)
	                        break;
					
					}
				   }
	   
	                  ++j;
	                  
                 }*/
						
					if(min==0)
					cout<<-1<<endl;
					else
					cout<<min<<endl;	
				  
				  

         }
return 0;

}




