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
ll arr[2000007],brr[200007],crr[200007];
char att[1000],m;
string g,h,v,x;
map<string,ll>mp1;
void bfs(string g1,string g2,vector<string>v1)
{
    ll a,b,i,j,k,l,t;
    mp1[g1]=0;
    queue<string>q1;
    q1.push(g1);
    while(!q1.empty())
    {
        v=q1.front();
        q1.pop();
        for(i=0; i<v1.size(); i++)
        {
            x=v1[i];
            if(!mp1.count(x) && v.length()==x.length())
            {
                b=0;
                for(j=0; j<x.size(); j++)
                    if(v[j]!=x[j])
                        b++;
                if(b==1)
                {
                    mp1[x]=mp1[v]+1;
                    q1.push(x);
                }
            }
        }
    }
}
int main()
{
    ll a,b,c,d,e,f,i,j,k,l=-1,t;
    vector<string>v1;
    string g1,g2;
    cin>>t;
    //gt;
    //k=t-1;
    while(t--)
    {
        v1.clear();
        while(1)
        {
            cin>>g;
            if(g=="*")
                break;
            v1.pb(g);
        }
        gt;
        while(getline(cin,h))
        {
            if(h.size()==0)
                break;
            stringstream str(h);
            str>>g1>>g2;
            mp1.clear();
            bfs(g1,g2,v1);
            cout<<g1<<" "<<g2<<" "<<mp1[g2]<<endl;

        }
        if(t)
            cout<<endl;
    }
    return 0;
}






