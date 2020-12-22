#include<stdio.h>
#include<math.h>
int main()
{
    int T,a,b,i,j,k,l,p,t;
    while(scanf("%d",&T)==1)
    {
        for(t=1; t<=T; t++)
        {
            if(t>1)
                printf("\n");
            scanf("%d %d",&a,&b);
            for(p=1; p<=b; p++)
            {
                if(p>1)
                    printf("\n");
                for(i=1; i<=a; i++)
                {
                    for(j=1; j<=i; j++)
                    {
                        printf("%d",i);
                    }
                    printf("\n");
                }
                for(k=a-1; k>=1; k--)
                {
                    for(l=1; l<=k; l++)
                    {
                        printf("%d",k);
                    }
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
