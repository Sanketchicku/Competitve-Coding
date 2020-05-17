#include <bits/stdc++.h> 
using namespace std; 
  
const int MAX_CHAR = 26; 
  
void commonCharacters(string str[], int n) 
{ 
    // primary array for common characters  
    // we assume all characters are seen before. 
    bool prim[MAX_CHAR]; 
    memset(prim, true, sizeof(prim)); 
  
    // for each string 
    for (int i = 0; i < n; i++) { 
  
        // secondary array for common characters 
        // Initially marked false 
        bool sec[MAX_CHAR] = { false }; 
  
        // for every character of ith string 
        for (int j = 0; str[i][j]; j++) { 
  
            // if character is present in all  
            // strings before, mark it. 
            if (prim[str[i][j] - 'a']) 
                sec[str[i][j] - 'a'] = true;  
        } 
  
        // copy whole secondary array into primary 
        memcpy(prim, sec, MAX_CHAR); 
    } 
  
    // displaying common characters 
    for (int i = 0; i < 26; i++) 
        if (prim[i]) 
            printf("%c ", i + 'a'); 
} 
  
// Driver's Code 
int main() 
{    
	int test,i,n;
	cin>>test;
	while(test--)
	{
		cin>>n;
		char str[n];
		for(i=0;i<n;i++)
		{ 
			cin>>char str[i];
		} 
    int n = sizeof(str)/sizeof(str[0]); 
    commonCharacters(str, n);
} 
    return 0; 
} 
