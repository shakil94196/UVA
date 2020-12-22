#include<stdio.h>
#include<math.h>
int a[1505];
int main()
{
    int i,j,k,l=0,s=1,r,o,t;
    a[0]=1;
    for(r=2; r<=870000000; r++)
    {
        i=r;
        while(i%2==0)
            i=i/2;
        while(i%3==0)
            i=i/3;
        while(i%5==0)
            i=i/5;
        if(i==1)
        {
            a[s]=r;
            s++;
        }
    }
    printf("%d\n",a[1500-1]);
    return 0;
}
