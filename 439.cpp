/*Bismillahir Rahmanir Rahim*/
#include<bits/stdc++.h>
using namespace std;
#define     ll          long long
#define     N           1e9+7
#define     pi          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     sq(a)       sqrt(a)
#define     ff          first
#define     ss          second
#define     gt          getchar()
#define     mod         1000000007
#define     all(v1)     v1.begin(),v1.end()
#define     dbg(a)      cout<< #a <<" --> "<<(a)<<endl
ll arr[2000007],brr[200007],crr[200007];
char att[1000],m;
string g,h,v;
ll x[10]= {0,-1,-1,-2,-2,2,2,1,1};
ll y[10]= {0,-2,2,-1,1,-1,1,-2,2};
int bfs(ll a1,ll b1,ll a2,ll b2)
{
    ll a,b,c,d,e,f,g,i,j,l;
    ll mv[9][9];
    memset(mv,0,sizeof(mv));
    mv[a1][b1]=0;
    pair<ll,ll>pii;
    queue<pair<ll,ll>>q1;
    pii.ff=a1;
    pii.ss=b1;
    q1.push(pii);
    while(!q1.empty())
    {
        pii=q1.front();
        q1.pop();
        if(pii.ff==a2 && pii.ss==b2)
            return mv[a2][b2];
        for(i=1; i<=8; i++)
        {
            c=pii.ff+x[i];
            d=pii.ss+y[i];
            if(c>8 || c<1 || d>8 || d<1)
                continue;
            else
            {
                mv[c][d]=mv[pii.ff][pii.ss]+1;
                q1.push(make_pair(c,d));
            }
        }
    }
}
int main()
{
    ll a,b,c,d,e,f,i,j,k,l,t;
    while(getline(cin,g))
    {
        a=g[0]-'a'+1;
        b=g[1]-'0';
        c=g[3]-'a'+1;
        d=g[4]-'0';
        e=bfs(a,b,c,d);
        cout<<"To get from "<<g[0]<<g[1]<<" to "<<g[3]<<g[4]<<" takes "<<e<<" knight moves."<<endl;
        g.clear();
        //cout<<e<<endl;
    }
}


