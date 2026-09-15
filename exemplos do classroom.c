
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
//revisao da prova
#include <stdio.h>
int main()
{
  int carros_vendidos,valor_vendas,salario_fixo=1200,valorcadacarro=150,salario_total,vendas_porcentagem,valorcadacarroporcetagem;

  printf("Quantos carros voçe vendeu:");
  scanf("%d",&carros_vendidos);

  printf("qual foi o valor em vendas feitas: ");
  scanf("%d",&valor_vendas);

  vendas_porcentagem=valor_vendas * 5/100;
  valorcadacarroporcetagem = carros_vendidos * valorcadacarro;
  salario_total = salario_fixo + vendas_porcentagem + valorcadacarroporcetagem;

  printf("seu salario total este mês é: %d",salario_total);
  return 0; 

}
