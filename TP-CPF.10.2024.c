/*
CALCULADORA DE DÍGITO VERIFICADOR DE CPF
Autor: Lucas Gomes E. Da Silva
Ciência Da Computação UFMG 2/2024
10/2024
Versão 1.0
*/

//* Bibliotecas Utilizadas *//

#include <stdio.h>
//**************************//

//* Declaração De Variáveis *//

int cpf;            // Variável para armazenar o cpf digitado.
int digitos_cpf[9]; // Array criada para armazenar os algarismos do cpf digitado.
int algoritmo1 = 0; // Variável para armazenar a soma dos produtos do dígitos, necessário para calcular o digito da dezena.
int algoritmo2 = 0; // Variável para armazenar a soma dos produtos do dígitos incluindo agora o dígito da dezena do verificador, necessário para calcular o digito da unidade.
int peso;           // Variável para armazenar o primeiro peso utilizado na soma dos produtos dos dígitos.
int digito_dezena;  // Variável para armazenar o dígito da dezena do código verificador.
int digito_unidade; // Variável para armazenar o dígito da unidade do código verificador.
//**************************//

int main()
{
    //* Recebendo o CPF e seus algarismos *//

    scanf("%d", &cpf);           // Recebe o CPF digitado.
    for (int i = 0; i <= 8; i++) // For utilizado para armazenar cada algarismo do CPF separadamente em uma array/vetor.
    {
        digitos_cpf[i] = cpf % 10;
        cpf = cpf / 10;
    }
    //*********************************//

    //* Calculando os dígitos do código verificador *//

    // Calculado o dígito da dezena

    peso = 10; // Peso inicial selecionado para o algoritmo do digito da dezena do código verificador.

    for (int i = 8; i >= 0; i--) // For utilizado para fazer a soma dos produtos do pesos pelos algarismos do CPF.
    {
        algoritmo1 = algoritmo1 + (peso * digitos_cpf[i]);
        peso--; // Alterando o peso para cada algarismo.
    }

    if ((algoritmo1 % 11 == 0) || (algoritmo1 % 11 == 1)) // Fazendo o algoritmo para calcular o dígito das dezenas.
    {
        digito_dezena = 0;
    }
    else
    {
        digito_dezena = 11 - (algoritmo1 % 11);
    }

    // Calculado o dígito da unidade

    peso = 11;

    for (int i = 8; i >= 0; i--) // For utilizado para fazer a soma dos produtos do pesos pelos algarismos do CPF.
    {
        algoritmo2 = algoritmo2 + (peso * digitos_cpf[i]);
        peso--; // Alterando o peso para cada algarismo.
    }
    algoritmo2 = algoritmo2 + (peso * digito_dezena); // Realizando o algoritmo do for para o dígito de dezena do códido verificador.

    if ((algoritmo2 % 11 == 0) || (algoritmo2 % 11 == 1)) // Fazendo o algoritmo para calcular o dígito das unidades.
    {
        digito_unidade = 0;
    }
    else
    {
        digito_unidade = 11 - (algoritmo2 % 11);
    }

    printf("%d%d\n", digito_dezena, digito_unidade); // Printando o código verificador de CPF calculado.
}