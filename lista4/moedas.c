#include <stdio.h>

int m1, m_50, m_25, m_10, m_5, m_1;

void troco(int valor)
{
    m1 = valor/100;
    m_50 = (valor - m1*100)/50;
    m_25 = (valor - m1*100 - m_50*50)/25;
    m_10 = (valor - m1*100 - m_50*50 - m_25*25)/10;
    m_5 = (valor - m1*100 - m_50*50 - m_25*25 - m_10*10)/5;
    m_1 = (valor - m1*100 - m_50*50 - m_25*25 - m_10*10 - m_5*5);

}

int main()
{
    int valor;
    scanf("%d", &valor);
    troco(valor);
    printf("O valor consiste em %d moedas de 1 real\nO valor consiste em %d moedas de 50 centavos\nO valor consiste em %d moedas de 25 centavos\nO valor consiste em %d moedas de 10 centavos\nO valor consiste em %d moedas de 5 centavos\nO valor consiste em %d moedas de 1 centavo\n", m1, m_50, m_25, m_10, m_5, m_1);

    return 0;
}