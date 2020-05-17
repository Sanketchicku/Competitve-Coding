#include<iostream>

int main()
 { int n,a,b,c,i;
   int arr[1000];
   //std::cout<<"Enter the test cases\n";
   std::cin>>n;
   for(i=1;i<=n;i++)
   {
   std::cin>>a>>b;
   c= a+b;
   arr[i]= c;
   }
   //display output
   for(i=1;i<=n;i++)
   {
       std::cout<<arr[i]<<"\n";
   }

 }

