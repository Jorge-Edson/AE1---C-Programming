#include <stdio.h>
#include <locale.h>

int main() {
    float salario, reajuste, salario_final;
    const int abono = 150.00;

    printf("-------------------------------\n");
    printf("UNICESUMAR\n");
    printf("RA: 21004557-5\n");
    printf("Nome: Jorge Edson Rocha Adão\n");
    printf("-------------------------------\n");

    printf("Insira o valor do salário do colaborador: R$ ");
    scanf("%f", &salario);

    reajuste = salario * 0.075;
    salario_final = salario + reajuste;

    if(salario >= 1750)
    {
      salario_final = salario_final + 150;
    }

    printf("Salário Final: R$ ");
    printf("%0.2f", salario_final);

    return 0;
}
  