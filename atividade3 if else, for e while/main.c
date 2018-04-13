#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Li, Ls, Contador, N;
    printf("Limite Inferior do Intervalo: ");
    scanf("%i", &Li);
    printf("Limite Superioi do Intervalo: ");
    scanf("%i", &Ls);
    printf("Qual o Multiplo (>=2): ");
    scanf("%i", &N);
    if(Li < 0 || Ls < 0 || N <= 1 || Ls < Li)
        printf("ERROR!!!!\n");
    else
    {
        printf("Os multiplos de %i entre [%i, %i] sao:\n", N, Li, Ls);
        for(Contador = Li; Contador <= Ls; Contador++)
        {
            if(Contador % N == 0)
                printf("Multiplo de %i = %i\n", N, Contador);
        }
    }
    return 0;
}
