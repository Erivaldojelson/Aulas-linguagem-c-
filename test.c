#include<stdio.h> /*arquivo de cabeçalho onde se encontra as funções printf e scanf*/
int main() { /*função principal*/

 float salario_min, salario_pessoa, qtd_sal_min;

printf ("Informe o valor do salario minimo e \n R$ ");
scanf("%f",&salario_min); 

printf("Informe o valor do salario recebido pela pessoa \n R$ ");
scanf("%f",&salario_pessoa); 

qtd_sal_min=(salario_pessoa/salario_min); 

printf("Uma pessoa que recebe um salario de R$ %.2f reais recebe %.1f salarios minimos \n", salario_pessoa,qtd_sal_min); 

return 0;
}