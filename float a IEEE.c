#include <stdio.h>

    typedef union {
        float f;
        struct{
            unsigned int mantisa : 23;
            unsigned int exponente : 8;
            unsigned int signo : 1;
        } raw;
    } mifloat;
void printBinario(int n, int i)
{
    int k;
    for (k = i - 1; k >= 0; k--) {
 
        if ((n >> k) & 1)
            printf("1");
        else
            printf("0");
    }
}
int main()
{
    int i;
    mifloat num;
    printf("Ingrese el número:\n");
    scanf("%f", &num.f);

        printf("La representación IEEE754 de %f es : \n", num.f);
    printf("%d  |  ", num.raw.signo);
    printBinario(num.raw.exponente, 8);
    printf(" | ");
    printBinario(num.raw.mantisa, 23);
    printf("\n\n");
    return 0;
}



