# Programa de Cálculo de Salário por Hora

Este projeto consiste em um programa em linguagem C que calcula o salário de um profissional que trabalha por hora. Ele foi desenvolvido de forma modular, utilizando três funções específicas para organizar melhor o código e facilitar sua manutenção.

**Descrição do funcionamento:**
O programa solicita ao usuário dois dados principais: o valor da hora de trabalho e a quantidade de horas trabalhadas no mês. Com essas informações, ele realiza os seguintes cálculos:

1. Salário bruto – calculado multiplicando o valor da hora pela quantidade de horas trabalhadas.
2. Desconto – calculado como 9% do salário bruto.
3. Salário líquido – obtido subtraindo o desconto do salário bruto.

**Funções utilizadas:**

* calcular_salario_bruto(valor_hora, horas_trabalhadas): recebe o valor da hora e a quantidade de horas trabalhadas, retornando o salário bruto.
* calcular_desconto(salario_bruto): recebe o salário bruto e retorna o valor referente ao desconto de 9%.
* calcular_salario_liquido(salario_bruto, desconto): recebe o salário bruto e o desconto, retornando o valor líquido.

**Fluxo do programa principal:**

1. O programa pede ao usuário o valor da hora e a quantidade de horas trabalhadas.
2. Com esses dados, chama a função calcular_salario_bruto para determinar o salário bruto.
3. Em seguida, chama calcular_desconto para determinar o valor descontado.
4. Depois, chama calcular_salario_liquido para determinar o valor final a ser recebido.
5. Por fim, exibe na tela o salário bruto, o valor do desconto e o salário líquido.


