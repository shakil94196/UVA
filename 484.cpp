/*Bismillahir Rahmanir Rahim*/
#include<bits/stdc++.h>
using namespace std;
#define  ll  long long
#define  N   1e9+9
#define  PI  acos(-1.0)
#define  pb  push_back
#define  sf  scanf
#define  pf  printf
#define  pb  push_back
#define  mp  make_pair
#define  xx  first
#define  yy  second
ll arr[2000007],arr2[200007];
vector<ll>v1,v2;
map<ll,ll>mp1;
set<ll>st1;
map<ll,ll>::iterator it;
set<ll>::iterator it1;

int main()
{
    ll a,i,j,k,l;
    while(scanf("%lld",&a)==1)
    {
        mp1[a]++;
        v1.pb(a);
    }
    for(i=0; i<v1.size(); i++)
    {
        if(mp1[v1[i]]>0)
        {
            cout<<v1[i]<<" "<<mp1[v1[i]]<<endl;
            mp1[v1[i]]=0;
        }
    }
    //for(it=mp1.begin();it!=mp1.end();it++)
    //cout<<it->first<<" "<<it->second;
    return 0;
}
