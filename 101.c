#include<stdio.h>
int main()
{
    int s=0,i,j,n,m,c,k;
    for(;;)
    {
        scanf("%d%d",&n,&m);
        if(n>m)
        {
            k=m;
            m=n;
            n=k;
        }
        for(i=n; i<=m; i++)
        {
            c=1;
            j=i;
            if(j==1)
            {
                break;
            }
            else if(j%2!=0)
            {
                j=(j*3)+1;
                c++;
            }
            else
            {
                j=j/2;
                c++;
            }
            if(c>=s)
            {
                s=c;
            }
        }
    }
    printf("%d %d",n,m);
    printf(" %d\n",s);
    return 0;
}
