
//CALCULE UM FATORIAL DE UM NUMERO (aguenta ate o 20)
#include <stdio.h>

int main() {

    int numero;
    long long fatorial=1,i;

    printf("Entre com o numero que sera fatorado:");
    scanf("%d", &numero);

    if(numero<=-1){

    printf("\nEste numero nao pode ser fatorado");
    return 0;
    }else{
for (i = 1; i <= numero; i++) {
        fatorial*=i;
    }
    }


    printf("\nO fatorial de %d e: %lld\n", numero, fatorial);

    return 0;
}
