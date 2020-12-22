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

int precedence (char ch)
{
    if(ch=='^')
        return 3;
    else if(ch=='/' || ch=='*')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return 0;
}
string convertInfixToPostfix(string infix)
{
    ll a,i,j,k,l;
    char ch;
    stack<char>stc1;
    string postfix;
    for(i=0; i<infix.size(); i++)
    {
        ch=infix[i];
        if(ch=='(')
            stc1.push(ch);
        else if(ch==')')
        {
            while(!stc1.empty() && stc1.top()!='(')
            {
                postfix+=stc1.top();
                stc1.pop();
            }
            if(!stc1.empty() && stc1.top()=='(')
                stc1.pop();
        }
        else
        {
            ll gg;
            gg=precedence(ch);
            if(gg==0)
                postfix+=ch;
            else
            {
                if(stc1.empty())
                    stc1.push(ch);
                else
                {
                    while(!stc1.empty() && stc1.top()!='(' && gg<=precedence(stc1.top()))
                    {
                        postfix+=stc1.top();
                        stc1.pop();
                    }
                    stc1.push(ch);
                }
            }

        }
    }
    while(!stc1.empty())
    {
        postfix+=stc1.top();
        stc1.pop();
    }
    return postfix;
}
int main()
{
    ll a,b,c,d,e,f,i,j,k,l=0,t;
    cin>>t;
    gt;
    gt;
    while(t--)
    {
        l++;
        /*if(l!=1 && t!=1)
            cout<<endl;*/
        string postfix,infix;
        while(1)
        {
            getline(cin,g);
            if(g.size()==0)
                break;
            else
                infix+=g;
        }
        postfix=convertInfixToPostfix(infix);
        //DBG(postfix);
        cout<<postfix<<endl;
        // DBG(t);
        if(t>0)
        {
            cout<<endl;
            //cout<<1<<endl;
        }
    }
    return 0;
}
