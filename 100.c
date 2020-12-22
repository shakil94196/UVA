#include<stdio.h>
int main()
{
    int k,t,n,i,j,s,l;
    while( scanf("%d%d",&i,&j)==2)
    {
        s=0;
        printf("%d %d",i,j);
        if(i>j)
        {
            k=j;
            j=i;
            i=k;
        }
        for(l=i; l<=j; l++)
        {
            t=1;
            n=l;
            for(;;)
            {
                if(n==1)
                {
                    break;
                }
                else if(n%2!=0)
                {
                    n=(n*3)+1;
                    t++;
                }
                else
                {
                    n=n/2;
                    t++;
                }
            }
            if(t>s)
            {
                s=t;
            }
        }
        printf(" %d\n",s);
    }
    return 0;
}
