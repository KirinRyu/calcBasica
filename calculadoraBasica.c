#include <stdio.h>
#include <locale.h>

char operacao(); // N�o � poss�vel colocar caracteres especiais no nome de uma fun��o, como "opera��o".
void calculo(char s);

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Garantindo que caracteres especiais (portugu�s) sejam interpretados.
    printf("Esta � uma calculadora capaz de operar somente 2 n�meros.\n\n");
    char op = operacao();
    calculo(op);
    return 0;
}

char operacao()
{
    char o;
    printf("Escolha uma das opera��es b�sicas (+, -, * , /): ");
    scanf(" %c", &o);

    while (1) { // While(1) cria um loop infinito, at� que haja um evento de quebra.
        switch (o) {
            case '+':
            case '-':
            case '*':
            case '/':
                return o;  // Retorna o caractere v�lido e encerra a fun��o
            default:
                printf("Opera��o inv�lida. Tente novamente: ");
                scanf(" %c", &o);
        }
    }
}

void calculo(char s)
{
    float num1, num2, r;
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Agora o segundo: ");
    scanf("%f", &num2);

    if(s == '+')
    {
        r = num1 + num2;
        printf("O resultado da soma entre %.2f e %.2f � %.2f", num1, num2, r);
    }
    else if(s == '-')
    {
        r = num1 - num2;
        printf("O resultado da subtra��o entre %.2f e %.2f � %.2f", num1, num2, r);
    }
    else if(s == '*')
    {
        r = num1 * num2;
        printf("O resultado da multiplica��o entre %.2f e %.2f � %.2f", num1, num2, r);
    }
    else if(s == '/')
    {
        r = num1 / num2;
        printf("O resultado da divis�o entre %.2f e %.2f � %.2f", num1, num2, r);
    }
}
