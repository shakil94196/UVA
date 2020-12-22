/*Bismillahir Rahmanir Rahim*/
/*Allah Hu Allah*/

#include<bits/stdc++.h>
using namespace std;


#define  ll         long long
#define  N          1e9+7
#define  pi         acos(-1.0)
#define  pb         push_back
#define  mp         make_pair
#define  ff         first
#define  ss         second
#define  sq(a)      sqrt(a)
#define  gt         getchar()
#define  mod        1e9+7
#define  all(v1)    v1.begin(),v1.end()
#define  dbg(a)     cerr<< "line "<<__LINE__ <<" : "<< #a <<" --> "<<(a)<<endl
#define  FastIO     ios::sync_with_stdio(false); cin.tie(0);cout.tie(0)


ll arr[200007],brr[200007],crr[200007];
char att[1000],m;
string g,h,v,x;


int main()
{

    ll a,b,c=0,d=0,e=0,f=0,n=0,i,j,k,l=-1,t,ans=0,sum=0,kk,m,jj,tt,x,y,w,r;

    cin>>g;

    //cout<<g.size()<<endl;
    if(g.size()==1)
    {
        k=g[0]-'0';
        if(k%8==0)
        {
            cout<<"YES"<<endl;
            cout<<k<<endl;
            return 0;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }



    else
    {
        for(i=0; i<g.size(); i++)
        {
            k=g[i]-'0';
            tt=g.size()-1;
            if(i<tt)
            {
                jj=g[i+1]-'0';
                jj=(k*10)+jj;
            }

            if(k%8==0)
            {
                cout<<"YES"<<endl;
                cout<<k<<endl;
                return 0;
            }
            else if(i<g.size()-1 && jj%8==0 )
            {
                cout<<"YES"<<endl;
                cout<<jj<<endl;
                return 0;
            }

        }



        for(i=g.size()-1; i>=0; i--)
        {
            if(g[i]=='0')
                n=1;
            for(k=i-1; k>=0; k--)
            {
                //dbg(1);
                for(j=k-1; j>=0; j--)
                {
                    //dbg(j);
                    l=(g[j]-'0');
                    d=(g[k]-'0');
                    e=(g[i]-'0');
                    b=(d*10)+e;
                    m=(l*10)+e;
                    sum=(l*10)+d;
                    kk=(l*100)+(d*10)+e;

                    //dbg(kk);
                    //dbg(b);

                    if(kk%8==0)
                    {
                        cout<<"YES"<<endl;
                        cout<<kk<<endl;
                        return 0;
                    }
                    else if(b%8==0)
                    {
                        cout<<"YES"<<endl;
                        cout<<b<<endl;
                        return 0;
                    }

                    else if(m%8==0)
                    {
                        cout<<"YES"<<endl;
                        cout<<m<<endl;
                        return 0;
                    }

                    else if(sum%8==0)
                    {
                        cout<<"YES"<<endl;
                        cout<<sum<<endl;
                        return 0;
                    }



                }

            }

        }


        cout<<"NO"<<endl;

    }

    return 0;

}
