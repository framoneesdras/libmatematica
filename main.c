/*
Discente: Esdras Framone Reis Neves
Matrícula: 2022060827
email: framoneesdras@ufmg.br
Turma TF - PDS II - 2024/01
-----------------------------------
Atividade: Módulo/Bibiolteca (Desafio)
*/

#include <stdio.h>
#include "matematica.h" //Inclusão da nova biblioteca criada.



int main() {

    printf("Ola. Este programa tem por objetivo calcular o seno, cosseno e tangente de um numero\n"); //Introdução objetivo código.

    printf("Digite um numero\n"); //Solicitação leitura número para funções
    float numero = 0;
    scanf("%f", &numero); //Leitura número

    float seno = calcular_seno(numero); //Cálculo seno de "numero".
    printf("Seno eh igual a %f\n", seno);

    float cos = calcular_cosseno(numero); //Cálculo cosseno de "numero".
    printf("Cosseno eh igual a %f\n", cos);

    float tan = calcular_tangente(numero); //Cálculo tangente de "numero".
    printf("Tangente eh igual a %f\n", tan); 

    getchar(); //pausar programa antes de fechar cmd.
    return 0;
}


