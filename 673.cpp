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
string g,h,e,f;
int main()
{
    ll a,b,c,d,i,j,k,l,t;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,g);
        stack<char>stc1,stc2;
        l=0,k=0;
        if(g==" ")
            cout<<"Yes"<<endl;
        else
        {
            for(i=0; i<g.size(); i++)
            {
                if(!stc1.empty() && g[i]==')' && stc1.top()=='(')
                    stc1.pop();
                else if(!stc1.empty() && g[i]==']' && stc1.top()=='[')
                    stc1.pop();
                else if(!stc1.empty() && g[i]=='}' && stc1.top()=='{')
                    stc1.pop();
                else
                    stc1.push(g[i]);

            }
            if(stc1.empty())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}






