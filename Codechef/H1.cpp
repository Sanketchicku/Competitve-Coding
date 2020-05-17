#include<iostream>
using namespace std;
bool isPrime(int );
bool isPrime(int num)
	{
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) 
    {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
int main()
{
	int i,j,a[3][3] = {1,2,3,4,5,6,7,8,9},a1[3][3],s=0,s1=0,temp,count=0,check=0;
	bool flag,flag1;
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a1[i][j];
		}
		
	}
	
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s = a[i][j]+ a[i][j+1];
			s1 = a[i][j]+ a[i+1][j];
			 flag = isPrime(s);
			 flag1 = isPrime(s1);
			 if(flag == true )
			 {
				 temp = a[i][j];
				 a[i][j] = a[i][j+1];
				 a[i][j+1] = temp;
				 count++;
			 }
			else if(flag1 == true )
			 {
				 temp = a[i][j];
				 a[i][j] = a[i+1][j];
				 a[i+1][j] = temp;
				 count++;
			 }
		}
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

       if( a[i][j] != a1[i][j])
       cout<< -1;
       check++;
       break;
       

 		}
		
	}
	if(check == 0)
	{
		cout<<temp;
	}
	
	
	
	
return 0;	
	
}

