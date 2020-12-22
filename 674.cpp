/*Bismillahir Rahmanir Rahim*/
/*Allah Hu Allah*/

#include<bits/stdc++.h>
using namespace std;


#define  ll         long long
#define  N          1e9+7
#define  pi         acos(-1.0)
#define  pb         push_back
#define  mp         make_pair
#define  ff         first
#define  ss         second
#define  sq(a)      sqrt(a)
#define  gt         getchar()
#define  mod        1e9+7
#define  all(v1)    v1.begin(),v1.end()
#define  dbg(a)     cerr<< "line "<<__LINE__ <<" : "<< #a <<" --> "<<(a)<<endl
#define  FastIO     ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)


ll arr[200007],brr[200007],crr[200007];
char att[1000],m;
string g,h,v,x;
vector<ll>weight,value;

int main()
{

    ll a,b,c=0,d=0,e=0,f=0,n=0,i,j,k,l=-1,t,ans=0,sum=0,m,x,y,w,r;

    value.pb(1);
    value.pb(5);
    value.pb(10);
    value.pb(25);
    value.pb(50);

    memset(brr,0,sizeof(brr));
    brr[0]=1;

    for(i=0; i<value.size(); i++)
    {
        for(j=value[i]; j<=7489; j++)
        {
            brr[j]=brr[j]+brr[j-value[i]];
        }
    }

    while(scanf("%lld",&a)==1)
        cout<<brr[a]<<endl;


    return 0;

}
