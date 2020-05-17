#include<iostream>
#include<algorithm>
using namespace std;

int findindex(int el, int arr3[],int n)
	{
		int i,in;
		for(i=0;i<n;i++)
		{
			if( arr3[i] == el)
			in = i;
			
		   
	    }
	 return in;
	}
		
int main()
{
	int n,i,j,index,index1=0;
	
	cin>>n;
	
	string arr1[n];
	int arr2[n];
	int arr3[n];

	
	for(i=0;i<n;i++)
	cin>>arr1[i];
	for(i=0;i<n;i++)
	cin>>arr2[i];
    copy(arr2, arr2+n, arr3);
    
    sort(arr2,arr2+n);
    
    for(i=0;i<n-3;i++)
    {
		if( (arr2[i+1] == arr2[i]+1) && (arr2[i+2] = arr2[i+1]+1) )
		{
			index1=i;
			break;
		}
	}
	if(index1!=0)
	{
			for(j=0;j<3;j++)
			{
			index= findindex(arr2[index1+j], arr3,n);
			if(j==2)
			cout<<arr1[index]<<endl;
			else
			cout<<arr1[index]<<":";
			
			  
		   }
			
		}
		
    else
    cout<<"NONE"<<endl;
 return 0;	
		
		
	}

	
    
    

