#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		
		int res =0,count =0;
		
		stack<char> st;
	
		cin>>s;
		int l = s.length();
		
	 for(int i = 0; i <l; i++){
        if(s[i] == '<') st.push(s[i]);
        else{
            if(!st.empty()){
                st.pop();
                res += 1;
                if(st.empty()){
                    count += 2*res;
                    res = 0;
                }
            }
            else 
                break;
        }
    }
		
		cout<<count<<endl;
				
	}
		
		
return 0;		
	}




