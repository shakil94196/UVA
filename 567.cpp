/*Bismiahir Rahmanir Rahim*/
#include<bits/stdc++.h>
using namespace std;
#define     ll          long long
//#define     N           1e9+7
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
const int N = 25;
const int INF = 0x3f3f3f3f;

ll que, t = 1, g[N][N], num[N];

void floyd()
{
    for (ll k = 1; k <= 20; k++)
    {
        for (ll i = 1; i <= 20; i++)
        {
            for (ll j = 1; j <= 20; j++)
            {
                if (g[i][j] > g[i][k] + g[k][j])
                {
                    cout<<g[i][j]<<" "<<g[i][k]<<" "<<g[k][j]<<endl;
                    g[i][j] = g[i][k] + g[k][j];
                    cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }
    /*for(ll k = 1; k <= 20; k++)
    {
        for(ll i = 1; i <= 20; i++)
        {
            for(ll j = 1; j <= 20; j++)
            {
                g[i][j] = min( g[i][j], g[i][k] + g[k][j] );
                cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }*/

}

int main()
{
    while (scanf("%lld", &num[1]) != EOF)
    {
        ll a;
        memset(g, INF, sizeof(g));
        for (ll i = 1; i <= num[1]; i++)
        {
            scanf("%lld", &a);
            g[1][a] = g[a][1] = 1;
        }
        for (ll i = 2; i < 20; i++)
        {
            scanf("%lld", &num[i]);
            for (ll j = 1; j <= num[i]; j++)
            {
                scanf("%lld", &a);
                g[i][a] = g[a][i] = 1;
            }
        }
        floyd();
        scanf("%lld", &que);
        printf("Test Set #%lld\n", t++);
        ll sta, end;
        while (que--)
        {
            scanf("%lld%lld", &sta, &end);
            printf("%2lld to %2lld: %lld\n", sta, end, g[sta][end]);
        }
        printf("\n");
    }
    return 0;
}
