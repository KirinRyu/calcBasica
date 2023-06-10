#include <stdio.h>
#include <locale.h>

char operacao(); // Não é possível colocar caracteres especiais no nome de uma função, como "operação".
void calculo(char s);

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Garantindo que caracteres especiais (português) sejam interpretados.
    printf("Esta é uma calculadora capaz de operar somente 2 números.\n\n");
    char op = operacao();
    calculo(op);
    return 0;
}

char operacao()
{
    char o;
    printf("Escolha uma das operações básicas (+, -, * , /): ");
    scanf(" %c", &o);

    while (1) { // While(1) cria um loop infinito, até que haja um evento de quebra.
        switch (o) {
            case '+':
            case '-':
            case '*':
            case '/':
                return o;  // Retorna o caractere válido e encerra a função
            default:
                printf("Operação inválida. Tente novamente: ");
                scanf(" %c", &o);
        }
    }
}

void calculo(char s)
{
    float num1, num2, r;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Agora o segundo: ");
    scanf("%f", &num2);

    if(s == '+')
    {
        r = num1 + num2;
        printf("O resultado da soma entre %.2f e %.2f é %.2f", num1, num2, r);
    }
    else if(s == '-')
    {
        r = num1 - num2;
        printf("O resultado da subtração entre %.2f e %.2f é %.2f", num1, num2, r);
    }
    else if(s == '*')
    {
        r = num1 * num2;
        printf("O resultado da multiplicação entre %.2f e %.2f é %.2f", num1, num2, r);
    }
    else if(s == '/')
    {
        r = num1 / num2;
        printf("O resultado da divisão entre %.2f e %.2f é %.2f", num1, num2, r);
    }
}
