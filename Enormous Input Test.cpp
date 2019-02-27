#include<stdio.h>
int main()
{
    long int n,k,c=0;
    scanf("%ld%ld",&n,&k);
    while(n--)
    {
        long int t;
        scanf("%ld",&t);
        if(t%k==0)
            c++;
    }
    printf("%ld",c);
    return 0;
}
