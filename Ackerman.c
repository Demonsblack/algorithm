#include <stdio.h>

int Ackerman(int n,int m)
{
    if(n == 1 && m == 1)
        return 2;
    if(n == 0 && m >= 0)
        return 1;
    if(n >= 2 && m == 0)
        return n+2;
    if(m >= 1 && n >= 1)
        return Ackerman(Ackerman(n-1,m),m-1);
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d\n",Ackerman(n,m));
    return 0;
}
