/*Bismillahir Rahmanir Rahim*/
#include<bits/stdc++.h>
using namespace std;
#define     ll        long long
#define     N         1e9+9
#define     PI        acos(-1.0)
#define     pb        push_back
#define     mp        make_pair
#define     ff        first
#define     ss        second
#define     gt        getchar()
#define     MOD       1000000007
#define     All(v1)   v1.begin(),v1.end()
#define     DBG(a)    cout<< #a <<" --> "<<(a)<<endl
ll arr[2000007],brr[200007],crr[200007];
char att[1000],m;
string g,h,v,x;
int main()
{
    ll a,b,c,d,e,f,i,j,k,l=-1,t;
    while(1)
    {
        priority_queue<ll > pq1;
        cin>>t;
        if(t==0)
            break;
        for(i=0; i<t; i++)
        {
            cin>>a;
            pq1.push(-1*a);
        }
        d=0;
        f=0;
        while(pq1.size()>1)
        {
            d=pq1.top();
            pq1.pop();
            e=pq1.top();
            pq1.pop();
            b=d+e;
            f=f+b;
            pq1.push(b);
        }
        cout<<abs(f)<<endl;

    }
    return 0;
}






