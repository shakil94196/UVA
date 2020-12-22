#include<stdio.h>
#include<math.h>
int divisor(int j)
{
    int i,m,k,t=0;
    m=sqrt(j);
    for(i=1; i<=m; i++)
    {
        if(j%i==0)
            t=t+2;
    }
    if(m*m==j)
        t=t-1;
    return t;

}
int main()
{
    int L,H,j,k,t,l,T,p;
    while(scanf("%d",&T)==1)
    {
        for(p=1; p<=T;p++)
        {
            scanf("%d %d",&L,&H);
            l=0;
            for(j=L; j<=H; j++)
            {
                t=divisor(j);
                if(l<t)
                {
                    l=t;
                    k=j;
                }

            }
            printf("Between %d and %d, %d has a maximum of %d divisors.\n",L,H,k,l);
        }
    }
    return 0;
}
