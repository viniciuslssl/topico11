#include <stdio.h>

int main() {
    int numCarrosVendidos;
    float valorVendas, salarioFixo, valorPorCarro, salarioFinal;

   
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorVendas);

    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarro);

   
    salarioFinal = salarioFixo + (valorPorCarro * numCarrosVendidos) + (0.05 * valorVendas);

   
    printf("O salário final do vendedor é: %.2f\n", salarioFinal);

    return 0;
}