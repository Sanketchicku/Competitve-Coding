
    /*                  oo0oo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      0\  =  /0
                    ___/`---
                  .' \\|     |// '.
                 / \\|||  :  |||// \
                / _||||| -:- |||||- \
               |   | \\\  -  /// |   |
               | \_|  ''\---/''  |_/ |
               \  .-\__  '-'  ___/-. /
             ___'. .'  /--.--\  `. .
          ."" '<  `.___\_<|>_/___.' >
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `_.   \_ __\ /__ _/   .-` /  /
     =====`-.____`.___ \_____/___.-`___.-
                       `=---=
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
  Sanket Kumar Mishra @sanketchicku
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/   
#include<bits/stdc++.h>
#define ll                    long long int
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define eb                    emplace_back
#define ab(a)                 (a<0)?(-1*a):a
#define pc                    putchar_unlocked
#define gc                    getchar_unlocked
#define mset(a,b,c)           loop(i,0,b) a[i]=c
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define MAX                   1e9
#define MIN                   -1e9
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vvi                   vector<vi>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define mid(s,e)              (s+(e-s)/2)
#define mini                  INT_MIN
const int MX=10010896;
const int lmt=3164;
const int N=10000001;
#define sv()                  int t; scanf("%d",&t); while(t--)
using namespace std;
int main()
{
	ll n,f;
	scanf("%lld %lld",&n,&f);
	ll arr[n][n];
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	ll k;
	scanf("%lld",&k);
	
	printf("%lld\n",k-1);
	for(ll i=0;i<k;i++)
	{
		printf("%c %lld\n",'U',n-1);
	}
	
}
	
	
