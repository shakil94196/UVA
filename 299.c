#include<stdio.h>
#include<math.h>
int main()
{
    int L,a[100],i,j=0,n,min,k,d,temp,p,y;
    while(scanf("%d",&n)!=EOF)
    {
        for(k=1; k<=n; k++)
        {
            scanf("%d",&d);
            j=0;
            for(i=1; i<=d; i++)
            {
                scanf("%d",&a[i]);
            }
            for(y=1; y<=d; y++)
            {
                for(i=y; i<d; i++)
                {

                    if(a[y]>a[i+1])
                    {
                        temp=a[y];
                        a[y]=a[i+1];
                        a[i+1]=temp;
                        j++;
                    }
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",j);
        }
    }
    return 0;
}
