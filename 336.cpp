/*Bismillahir Rahmanir Rahim*/
#include<bits/stdc++.h>
using namespace std;
#define     ll          long long
#define     n           1e9+7
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
ll arr[2000007],brr[200007],crr[200007];
char att[1000],m;
string g,h,v,x;
map<ll,ll>mp1;
void bfs(ll start,map<ll,vector<ll>>graph)
{
    ll a,i,j,k,l;
    queue<ll>q1;
    q1.push(start);
    mp1[start]=0;
    while(q1.empty()==0)
    {
        k=q1.front();
        q1.pop();
        ll p=graph[k].size();
        for(i=0; i<p; i++)
        {
            l=graph[k][i];
            if(!mp1.count(l))
            {
                mp1[l]=mp1[k]+1;
                q1.push(l);
            }
        }
    }
}
int main()
{
    ll a,b,c,d,e,f,i,j,k,l=-1,t,jj=0;
    while(1)
    {
        cin>>a;
        if(a==0)
            break;
        map<ll,vector<ll>>graph;
        f=0,j=0;
        while(a--)
        {
            cin>>b>>c;
            graph[b].pb(c);
            graph[c].pb(b);
        }
        while(1)
        {
            ll start,ttl;
            cin>>start>>ttl;
            if(start==0 && ttl==0)
                break;
            mp1.clear();
            d=0;
            bfs(start,graph);
            map<ll,ll>::iterator it1;
            for(it1=mp1.begin(); it1!=mp1.end(); it1++)
            {
                if(it1->ss>ttl)
                    d++;
            }
            dbg(d);
            d+=(graph.size()-mp1.size());
            dbg(graph.size());
            dbg(mp1.size());
            cout<<"Case "<<++jj<<": "<<d<<" ";
            cout<<"nodes not reachable from node "<<start<<" with TTL = "<<ttl<<"."<<endl;

        }
    }
    return 0;
}

