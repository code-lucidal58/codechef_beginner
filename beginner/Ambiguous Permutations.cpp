#include<cstdio>
using namespace std;
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t!=0)
    {
        int i=1,a[t+1],flag=0;
        while(i<=t)
        {
            scanf("%ld",&a[i]);
            i++;
        }
        i=1;
        while(i<=t)
        {
            if(a[a[i]]!=i)
            {
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0)
            printf("ambiguous\n");
        else
            printf("not ambiguous\n");
        scanf("%ld",&t);
    }
    return 0;
}
