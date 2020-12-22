#include<stdio.h>
int main()
{
    long long int a,b,k,l,i=0;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        i++;
        l=a;
        if(a==-1 && b==-1)
            break;
        k=0;
        while(a!=1 && a<=b)
        {
            k=k+1;
            if(a%2==0)
            {
                a=a/2;

            }
            else if(a%2!=0)
            {
                a=(a*3)+1;

            }
        }
        if(a==1)
            k++;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,l,b,k);
    }
    return 0;

}
