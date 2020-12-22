#include<stdio.h>
#include<math.h>
int IsPrime[100000],prime[100000],size=2;
void sieve()
{
    int i,j,k,l,u;
    for(i=1; i<=10000; i++)
    {
        IsPrime[i]=1;
    }
    IsPrime[1]=0;
    for(j=2; j<=10000; j++)
    {
        if(IsPrime[j]==1)
        {
            for(k=j+j; k<=10000; k=k+j)
                IsPrime[k]=0;
        }
    }
    for(l=2; l<=10000; l++)
    {
        prime[1]=1;
        if(IsPrime[l]==1)
        {
            prime[size]=l;
            size++;
        }
    }
}
int main()
{
    int k,c,m,l,i,j,t,p,r,s,o,y,e,u,n;
    sieve();
    while(scanf("%d %d",&k,&c)==2)
    {
        for(t=1; prime[t]<=k; t++)
        {
            p=t;
        }

        if(k%2==0 && p%2==1 && prime[t-1]<=k)
        {
            m=(2*c)-1;
            n=m;
            l=p-m;

            s=l/2;
            if(m<=p)
            {
                printf("%d %d:",k,c);
                for(j=s+1,o=1; o<=m; j++,o++)
                {
                    printf(" %d",prime[j]);
                }
                //printf("\n");
            }
            else
            {
                printf("%d %d:",k,c);
                for(r=1; prime[r]<=k; r++)
                {
                    printf(" %d",prime[r]);
                }
                //printf("\n");
            }
        }
        else if(k%2==0 && p%2==0 &&  prime[t-1]<=k)
        {
            m=2*c;
            l=p-m;

            s=l/2;

            if(m<=p)
            {
                printf("%d %d:",k,c);
                for(j=s+1,o=1; o<=m; j++,o++)
                {
                    printf(" %d",prime[j]);
                }
                //printf("\n");
            }

            else
            {
                printf("%d %d:",k,c);
                for(r=1; prime[r]<=k; r++)
                {
                    printf(" %d",prime[r]);
                }
                //printf("\n");
            }

        }
        else if(k%2==1 && p%2==0 && prime[t-1]<=k)
        {
            m=(2*c);
            l=p-m;

            s=l/2;

            if(m<=p)
            {
                printf("%d %d:",k,c);
                for(j=s+1,o=1; o<=m; j++,o++)
                {
                    printf(" %d",prime[j]);
                }
                // printf("\n");
            }
            else
            {
                printf("%d %d:",k,c);
                for(r=1; prime[r]<=k; r++)
                {
                    printf(" %d",prime[r]);
                }
                //printf("\n");
            }

        }
        else if(k%2==1 && p%2==1 && prime[t-1]<=k)
        {
            m=(2*c)-1;
            l=p-m;

            s=l/2;

            if(m<=p)
            {
                printf("%d %d:",k,c);
                for(j=s+1,o=1; o<=m; j++,o++)
                {
                    printf(" %d",prime[j]);
                }
                //printf("\n");
            }
            else
            {
                printf("%d %d:",k,c);
                for(r=1; prime[r]<=k; r++)
                {
                    printf(" %d",prime[r]);
                }
                //printf("\n");
            }
        }
        printf("\n\n");
    }
    return 0;

}
