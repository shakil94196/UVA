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
int main()
{
    ll a,b,c,d,e,f,i,j,k,l,t;
    FastIO;
    while(getline(cin,g))
    {
        //getline(cin,g);
        f=0;
        l=0;
        for(i=0; i<g.size(); i++)
        {
            if(g[i]>=65 && g[i]<=90 || g[i]>=97 && g[i]<=122)
            {
                f=1;
            }
            else if((g.size()-1)==i)
            {
                if(f==1)
                    l++;
            }
            else if(f==1)
            {
                l++;
                f=0;
            }
        }
        cout<<l<<endl;

    }
}

