#include<bits/stdc++.h>

using namespace std;
map<string,string> previous;
map<string,int> visited;
map<string,vector<string> > adj;

int bfs(string s1,string s2)
{
    queue<string> q;
    while(!q.empty())
        q.pop();
    q.push(s1);
    while(!q.empty())
    {
        string str=q.front();
        q.pop();
        visited[str]=1;
        if(str==s2)
            return 1;
        for(int i=0; i<adj[str].size(); i++)
        {
            string str2=adj[str][i];
            if(visited[str2]==0)
            {
                visited[str2]=1;
                previous[str2]=str;
                if(str2==s2)
                    return 1;
                q.push(str2);
            }

        }
    }
    return 0;
}
void print_path(string s1,string s2)
{
    if(s1==s2)
        return;
    print_path(previous[s1],s2);
    cout<<previous[s1]<<" "<<s1<<endl;
}
int main()
{
    int n,i;
    string s1,s2;
    int p=0;
    while(scanf("%d",&n)!=EOF)
    {

        for(i=0; i<n; i++)
        {
            cin>>s1>>s2;
            adj[s1].push_back(s2);
            adj[s2].push_back(s1);
        }
        cin>>s1>>s2;
        if(p)
            printf ("\n");
        p = 1;
        if(bfs(s1,s2))
        {
            print_path(s2,s1);
        }
        else
            cout<<"No route"<<endl;
        visited.clear();
        adj.clear();
        previous.clear();

    }
    return 0;
}
