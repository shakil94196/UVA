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
vector<string>v1,v2;
//vector<string>:: iterator it;
map<string,ll>mp1;
set<ll>st1;
map<string,ll>::iterator it;
set<ll>::iterator it1;
string g,h,e,f;
string lowercase(string s)
{
    for(ll i=0;i<s.size();i++)
       if(s[i]>='A' && s[i]<='Z')
       s[i]=s[i]+32;
    sort(s.begin(),s.end());
    return s;

}
int main()
{
    ll a,b,c,d,i,j,k,l;
    //getchar();
    //cin>>g;
    //getchar();
    while(1)
    {
        cin>>g;
        if(g=="#")
            break;
        v1.pb(g);
        mp1[lowercase(g)]++;
    }
    sort(v1.begin(),v1.end());
    for(i=0;i<v1.size();i++)
    {
        if(mp1[lowercase(v1[i])]==1)
            printf("%s\n",v1[i].c_str());
    }
    return 0;
}
/*
ladder came tape soon leader acme RIDE lone Dreis peat
ScAlE orb eye Rides dealer NotE derail LaCeS drIed
noel dire Disk mace Rob dries
*/
