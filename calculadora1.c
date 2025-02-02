#include <stdio.h>

double calcularadicao(double num1, double num2)
{
    return num1 + num2;
}

double calcularsubtracao(double num1, double num2)
{
    return num1 - num2;
}

double calcularmultiplicacao(double num1, double num2)
{
    return num1 * num2;
}

double calculardivisao(double num1, double num2)
{
    return num1 / num2;
}

int main()
{
    char opcao;
    do
    {
        printf("---------------------\n");
        printf("CALCULADORA DO KLEBER\n");
        printf("---------------------\n");
        double num1, num2 = 0;
        printf("Digite o primeiro numero: ");
        scanf("%lf", &num1);
        printf("Digite o segundo numero: ");
        scanf("%lf", &num2);

        int op = 0;
        printf("Digite a operacao que deseja fazer\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        scanf("%d", &op);

        int casasdecimais = 0;
        switch (op)
        {
        case 1:
            printf("Quantas casas decimais deseja? ");
            scanf("%d", &casasdecimais);
            printf("O RESULTADO DA OPERAÇAO E: %.*f\n", casasdecimais, calcularadicao(num1, num2));
            break;
        case 2:
            printf("Quantas casas decimais deseja? ");
            scanf("%d", &casasdecimais);
            printf("O RESULTADO DA OPERAÇAO E: %.*f\n", casasdecimais, calcularsubtracao(num1, num2));
            break;
        case 3:
            printf("Quantas casas decimais deseja? ");
            scanf("%d", &casasdecimais);
            printf("O RESULTADO DA OPERAÇAO E: %.*f\n", casasdecimais, calcularmultiplicacao(num1, num2));
            break;
        case 4:
            printf("Quantas casas decimais deseja? ");
            scanf("%d", &casasdecimais);
            printf("O RESULTADO DA OPERAÇAO E: %.*f\n", casasdecimais, calculardivisao(num1, num2));
            break;

        default:
            printf("Opcao invalida\n");
            break;
        }

        printf("DESEJA FAZER OUTRO CALCULO? (S/N): ");
        getchar();
        scanf("%c", &opcao);
    } while (opcao != 'N' && opcao != 'n');
}
