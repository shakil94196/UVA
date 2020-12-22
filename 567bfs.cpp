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
void bfs(ll a,vector<ll>v1[1000])
{
    ll b,c,d,e,f,i,j,k,l;
    memset(arr,0,sizeof(arr));
    memset(brr,0,sizeof(brr));
    arr[a]=1;
    queue<ll>q1;
    q1.push(a);
    while(!q1.empty())
    {
        b=q1.front();
        q1.pop();
        c=v1[b].size();
        for(i=0; i<c; i++)
        {
            d=v1[b][i];
            if(arr[d]==0)
            {
                arr[d]=1;
                brr[d]=brr[b]+1;
                q1.push(d);
            }
        }

    }

}
int main()
{
    ll a,b,c,d,e,f,i,j,k,l=0,t;
    while(cin>>a)
    {
        vector<ll>v1[1000];
        for(i=0; i<a; i++)
        {
            cin>>b;
            v1[1].pb(b);
            v1[b].pb(1);
        }
        for(i=2; i<20; i++)
        {
            cin>>d;
            for(j=0; j<d; j++)
            {
                cin>>e;
                v1[i].pb(e);
                v1[e].pb(i);
            }
        }
        cin>>t;
        cout<<"Test Set #"<<++l<<endl;
        while(t--)
        {
            cin>>f>>k;
            bfs(f,v1);
            printf("%2lld to %2lld: %lld\n",f,k,brr[k]);
            //cout<<f<<" to "<<k<<": "<<brr[k]<<endl;
        }
        cout<<endl;
    }
}
