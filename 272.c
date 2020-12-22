#include<stdio.h>
int main()
{
    char b[1000];
    int a,i,j,p=1;
    while(gets(b))
    {
        int len=strlen(b);
        for(i=0; i<len; i++)
        {
            if(b[i]=='"')
            {
                p++;
                if(p%2==0)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",b[i]);
        }
    }
    return 0;
}
