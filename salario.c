#include <stdio.h>  

// A partir daqui vou estar modelando a função que calcula o salário bruto
float calcular_salario_bruto(float valor_hora, int horas_trabalhadas) {
    // Na linha de baixo vou buscar editar tal função para retornar o valor bruto do salário
    return valor_hora * horas_trabalhadas;
}

// A partir daqui vou estar modelando a função que calcula o desconto
float calcular_desconto(float salario_bruto) {
    // Na linha de baixo vou aplicar o desconto de 9% sobre o salário bruto
    return salario_bruto * 0.09;
}

// A partir daqui vou estar modelando a função que calcula o salário líquido
float calcular_salario_liquido(float salario_bruto, float desconto) {
    // Na linha de baixo vou subtrair o desconto do salário bruto
    return salario_bruto - desconto;
}

int main() {
    // Na linha de baixo vou declarar as variáveis que vou precisar
    float valor_hora, salario_bruto, desconto, salario_liquido;
    int horas_trabalhadas;

    // Na linha de baixo vou pedir para o usuário digitar o valor da hora de trabalho
    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);

    // Na linha de baixo vou pedir para o usuário digitar a quantidade de horas trabalhadas
    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%d", &horas_trabalhadas);

    // Na linha de baixo vou calcular o salário bruto chamando a função específica
    salario_bruto = calcular_salario_bruto(valor_hora, horas_trabalhadas);

    // Na linha de baixo vou calcular o desconto chamando a função específica
    desconto = calcular_desconto(salario_bruto);

    // Na linha de baixo vou calcular o salário líquido chamando a função específica
    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    // Na linha de baixo vou exibir os resultados para o usuário
    printf("\nSalario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto (9%%): R$ %.2f\n", desconto);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0; 
}
