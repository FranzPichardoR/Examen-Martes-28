#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, k=0;

    for(x=0;x<1000;x++)
    {
        if(x%3==0 || x%5==0)
            k+=x;
    }

    printf("%d", k);
}
