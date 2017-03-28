#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    int i, j, x=0, p, acum=0;

    printf("Digite la cadena de caracteres: \n");

    scanf("%s", arr);

    for(p=0;p<=100;p++)
    {
        if(arr[p]=='1' || arr[p]=='2' || arr[p]=='3' || arr[p]=='4' || arr[p]=='5' || arr[p]=='6' || arr[p]=='7'|| arr[p]=='8' || arr[p]=='9')
            x++;
        if(arr[p]=='\0')
            break;
        else
            acum++;
    }

    printf("\nEl numero de caracteres es: %d", acum);
    printf("\nEl numero de digitos es: %d\n", x);
}
