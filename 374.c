#include<stdio.h>
int bigmod(int base,int power,int mod)
{
    if(power==0)
        return 1;
    if(power%2==0)
    {
        int t=bigmod(base,power/2,mod);
        return ((t%mod)*(t%mod))%mod;
    }
    else
        return ((base%mod)*bigmod(base,power-1,mod)%mod)%mod;
}
int main()
{
    int a,i,j,k,base,power,mod;
    while(scanf("%d %d %d",&base,&power,&mod)==3)
    {
        k=bigmod(base,power,mod);
        printf("%d\n",k);
    }
    return 0;
}
