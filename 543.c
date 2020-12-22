#include<stdio.h>
#include<math.h>
int prime(int a)
{
    int b,c=0,i;
    b=sqrt(a);
    for(i=2; i<=b; i++)
    {
        if(a%i==0)
        {
            c=1;
            break;
        }
    }
    return c;
}
int main()
{
    int a,b,c,i,j;
    while(scanf("%d",&a)==1)
    {
        c=0;
        if(a%2==1)
            printf("Goldbach's conjecture is wrong.\n");
        else if(a==0)
            break;
        else
        {
            for(i=3; i<=a/2; i++)
            {
                if(prime(i)==0)
                {
                    b=prime(a-i);
                    if(b==0)
                    {
                       c=1;
                       break;
                   }
                }
            }

            if(c==0)
                printf("Goldbach's conjecture is wrong.\n");
            else
                printf("%d = %d + %d\n",a,i,a-i);
        }
    }
    return 0;
}
