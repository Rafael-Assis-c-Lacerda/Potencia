#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
int main()
{
char again;
    do{
        float num;
        float expoente;
        float tempexp;
        float resultado = 1;
        bool error;

        do{
            printf("\n digite um numero que vc deseja potencializar:");
            scanf("%f",&num);
            printf("\n digite o espoente:");
            scanf("%f",&expoente);
            !error;
            //if(num != int){!error;}
        }
        while(error);

        if(expoente<0){
            expoente *= -1;
            num =  1/num;
        }

        for (int i =0; i<expoente;i++){
            resultado *= num;
        }

        printf("\n esse e o resultdo: %f ", resultado);

        printf("\n quer continur calculando?[S/N]");
        scanf(" %c",&again);
        again = toupper(again);

        }while(again=='S');
    return 0;
}

