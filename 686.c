#include<stdio.h>
#include<math.h>
int IsPrime[1000000],prime[100000],size=1;
int sieve()
{
    int i,j,k,l,u;
    for(i=1;i<=1000000;i++)
    {
        IsPrime[i]=1;
    }
    IsPrime[1]=0;
    for(j=2;j<=1000000;j++)
    {
        if(IsPrime[j]==1)
        {
            for(k=j+j;k<=1000000;k=k+j)
                IsPrime[k]=0;
        }
    }
    for(l=1;l<=1000000;l++)
    {
        if(IsPrime[l]==1){
            prime[size]=l;
            size++;
        }
    }
}
int main()
{
    int i,f,k,m,l,t,u,a;
    sieve();
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        u=0;
        k=a/2;
        for(i=1;i<=k;i++)
        {
            for(f=i;f<=k;f++)
            {
                if(prime[i]+prime[f]==a)
                    u++;
            }
        }
        printf("%d\n",u);
    }
    return 0;
}
