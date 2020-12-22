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
int arr[20007],brr[2007],crr[2007];
char att[1000],m;
string g,h,v,x;
struct edge
{
    int a;
    int b;
};
vector<edge>v1;
int ff(int c)
{
    if(arr[c]==c)
        return c;
    else
        ff(arr[c]);
}
int mst(int a)
{
    int i,f=0;
    for(i=1; i<=a; i++)
        arr[i]=i;
    int s=0,p=0;
    for(i=0; i<(int)v1.size(); i++)
    {
        int d=ff(v1[i].a);
        int e=ff(v1[i].b);
        if(d!=e)
        {
            arr[d]=e;
            //s++;
            //p=p+v1[i].c;
            //if(s==a-1)
            //break;
        }
    }
    for(i=1; i<=a; i++)
    {
        if(arr[i]==i)
            f++;
    }
    return f;
}
int main()
{
    int a,b,c,d,e,f,i,j,k,l=-1,t;
    scanf("%d",&t);
    char u;
    while(t--)
    {
        getline(cin,h);
        //dbg(k);
        k=h[0]-'A'+1;
        //gt;
        while(getline(cin,h))
        {
            if(h[0]=='\0')
                break;
            c=h[0]-'A'+1;
            d=h[1]-'A'+1;
            edge vv;
            vv.a=c;
            vv.b=d;
            v1.pb(vv);
        }
        e=mst(k);
        cout<<e<<endl;
        if(t)
            cout<<endl;
        if(v1.size()>0)
            v1.clear();
        memset(arr,0,sizeof(arr));
        //memset(v1.edge(),0,sizeof(edge)*v1.size());
    }

    return 0;
}
