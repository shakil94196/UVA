#include <iostream>

using namespace std;

int parent[26],rankk[26];

int Find(int x)
{
    if(x!=parent[x])
        parent[x]=Find(parent[x]);
    return parent[x];
}

void Unionn(int x, int y)
{
    int PX=Find(x),PY=Find(y);
    if(rankk[PX]>rankk[PY])
        parent[PY]=PX;
    else
    {
        parent[PX]=PY;
        if(rankk[PX]==rankk[PY])
            rankk[PY]++;
    }
}

int main()
{
    int T,n,x,y,ans,i;
    char c;
    string s;

    scanf("%d\n",&T);

    while(T--)
    {
        getline(cin,s);
        n=s[0]-'A'+1;
        for(i=1; i<=n; i++)
        {
            parent[i]=i;
            rankk[i]=0;
        }

        ans=n;

        while(1)
        {
            if(!getline(cin,s) || s.empty())
                break;

            x=s[0]-'A'+1;
            y=s[1]-'A'+1;

            if(Find(x)!=Find(y))
            {
                Unionn(x,y);
                ans--;
            }
        }
        printf("%d\n",ans);
        if(T)
            printf("\n");
    }

    return 0;
}
