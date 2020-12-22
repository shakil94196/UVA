/*Bismiahir Rahmanir Rahim*/
#include<bits/stdc++.h>
using namespace std;
#define     ll          long long
#define     N           1e9+7
#define     pi          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     ff          first
#define     ss          second
#define     sq(a)       sqrt(a)
#define     gt          getchar()
#define     mod         1000000007
#define     all(v1)     v1.begin(),v1.end()
#define     dbg(a)      cout<< #a <<" --> "<<(a)<<endl
#define     IN          freopen("input.txt","r+",stdin)
#define     OUT         freopen("output.txt","w+",stdout)
#define     FastIO      ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)
map<ll,ll>mp1;
ll arr[2000],brr[2000];
string g,h;
int main()
{
    ll a,b,c,d,e,f,i,j,k,l=0,t;
    FastIO;
    while(getline(cin,g))
    {
        memset(arr,0,sizeof(arr));
        for(i=0; i<g.size(); i++)
        {
            a=g[i];
            if(a>=65 && a<=90 || a>=97 && a<=122)
                arr[a]++;
            //dbg(a);
        }
        k=0;
        d=0;
        for(i=1; i<125; i++)
        {
            if(arr[i]>k && arr[i]!=0)
            {
                k=arr[i];
                //cout<<k<<endl;
                //cout<<i<<endl;
            }
        }
        for(i=1; i<125; i++)
        {
            if(arr[i]==k)
            {
                char cc=(char)i;
                cout<<cc;
            }
        }
        cout<<" "<<k<<endl;
    }
}

