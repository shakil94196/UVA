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
char att[1000],m;
ll arr[2000007];
string g,h,v,x;
int main()
{
    FastIO;
    ll a=0,b=0,c=0,d=0,e=0,f=0,i,j,k,l=1,t;
    while(cin>>t)
    {
        ll sum=0;
        b=0;
        if(t==0)
            break;
        //if(l!=1)
        // cout<<endl;
        l=0;
        for(i=0; i<t; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        a=sum/t;
        for(i=0; i<t; i++)
        {
            if(arr[i]>a)
                b+=arr[i]-a;
        }
        cout<<"Set #"<<++c<<endl;
        cout<<"The minimum number of moves is "<<b<<"."<<endl;
        cout<<endl;
        //cout<<b<<endl;


    }
    return 0;
}







