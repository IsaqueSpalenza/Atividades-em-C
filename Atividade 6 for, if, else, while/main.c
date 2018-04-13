#include <stdio.h>
#include <stdlib.h>
#define SM 880.06 // SM : Salário Mínimo
int main()
{
    float Salario, PA, PB, PC;
    int Clientes = 0, ClasseA = 0, ClasseB = 0, ClasseC = 0;
    while(Clientes < 1000)
    {
        printf("Salario em R$ (Salario >= Salario Minimo: R$ %.2f) = ", SM);
        scanf("%f", &Salario);
        if(Salario < SM)
            printf("Erro no Salario. Digite de novo.\n");
        else
        {
            Salario = Salario / SM; // Salario em Salario minimos
            if(Salario <= 5)
                ClasseC++;
            else if(Salario <= 15)
                ClasseB++;
            else
                ClasseA++;
            Clientes++;
            PA = 100.0 * ClasseA / Clientes;
            PB = 100.0 * ClasseB / Clientes;
            PC = 100.0 * ClasseC / Clientes;
            printf("Porcentagem de Clientes da Classe A: %.1f%%\n", PA);
            printf("Porcentagem de Clientes da Classe B: %.1f%%\n", PB);
            printf("Porcentagem de Clientes da Classe C: %.1f%%\n", PC);
        }
    }
    return 0;
}
