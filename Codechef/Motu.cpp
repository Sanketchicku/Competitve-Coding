#include<iostream>
using namespace std;

 char arr[100]; 
void decToHexa(int n) 
{     int p=0;
    // char array to store hexadecimal number 
    char hexaDeciNum[100];

   
      
    // counter for hexadecimal number array 
    int i = 0; 
    while(n!=0) 
    {    
        // temporary variable to store remainder 
        int temp  = 0; 
          
        // storing remainder in temp variable. 
        temp = n % 16; 
          
        // check if temp < 10 
        if(temp < 10) 
        { 
            hexaDeciNum[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hexaDeciNum[i] = temp + 55; 
            i++; 
        } 
          
        n = n/16; 
    } 
      
    // printing hexadecimal number array in reverse order 
   for(int j=i-1; j>=0; j--) 
        {    
			arr[p]= hexaDeciNum[j];
			cout << hexaDeciNum[j];
			p++;
			}
			
        
} 
  
// Driver program to test above function 
int main() 
{ 
    int a,b,q,i,p,alphabet=1;
    cin>>a>>b;
    q=a-b;
    for(i=a;i<=b;i++)
    {
   
    decToHexa(a);
   }
    
    for(p=0; p<q ; b++)
    {   
		cout <<arr[p]<<" ";
		if ((arr[p])>= 65) 
            alphabet++; 
     }
     cout<<alphabet;
    return 0; 
} 
