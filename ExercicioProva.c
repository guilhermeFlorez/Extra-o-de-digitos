#include<stdio.h>
void main() {
    unsigned long long numero;
    //int dig6, dig7, dig8, dig9;
    int quatro_ultimo;

    printf("Informe um numero de 10 digitos: ");
    scanf("%lld", &numero);

    /*dig6 = (numero / 10000) % 10;
    dig7 = (numero / 1000) % 10;
    dig8 = (numero / 100) % 10;
    dig9 = (numero / 10) % 10;*/

    quatro_ultimo = (numero / 10) % 10000;


    /*printf("Digito 6 = %d\n", dig6);
    printf("Digito 7 = %d\n", dig7);
    printf("Digito 8 = %d\n", dig8);
    printf("Digito 9 = %d\n", dig9);*/

    printf("Os quatro ultimos digitos sao: %d\n",quatro_ultimo);
}