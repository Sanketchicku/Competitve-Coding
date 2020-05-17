#include <iostream>
using namespace std;

int main() {
    int T;
cin>>T;
while(T--)
{
    int N,remain; int sum=0;
cin>>N;

while(N!=0)
{remain=N%10;
sum=sum + remain;
    N=N/10;
}
cout<<sum<<"\n";
}
	// your code goes here
	return 0;
}
