#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,t1,t2,t3,t4,t5,p=1,count=0;
	cin>>t1>>t2>>t3>>t4>>t5;
	int arr1[t1];
	int arr2[t2];
	int arr3[t3];
	int arr4[t4];
	int arr5[t5];
	int t = t1+t2+t3+t4+t5;
	int arr6[t];
	for(i=0;i<t1;i++)
	{
		cin>>arr1[i];
		arr6[i] = arr1[i];
	}
    for(i=0;i<t2;i++)
	{
		cin>>arr2[i];
		arr6[i+t1] = arr2[i];
	}
	for(i=0;i<t3;i++)
	{
		cin>>arr3[i];
		arr6[i+t1+t2] = arr3[i];
	}
	for(i=0;i<t4;i++)
	{
		cin>>arr4[i];
		arr6[i+t1+t2+t3] = arr4[i];
	}
	for(i=0;i<t5;i++)
	{
		cin>>arr5[i];
		arr6[i+t1+t2+t3+t4] = arr5[i];
	}
	

	 sort(arr6, arr6+t); 
	 
	for(i=0;i<t;i++)
	{
		if(arr6[i] == arr6[i+1])
		p++;
		else if(arr6[i] !=arr6[i+1])
		{
			if(p>=3)
			{
			count++;
			p=1;
		    }
		    p=1;
		}
	}
	
	cout<<count<<endl;
return 0;

}
	
