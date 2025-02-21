#include <stdio.h>

int main (){

    //Carta 1
    char estado1 [20];
    char estado2 [20];
    char cod1 [20]; 
    char cod2 [20];
    char cidade1 [20];
    char cidade2 [20];
    int populacao1, populacao2;
    int area1, area2;
    int pib1, pib2;
    int pturistico1, pturistico2;

    printf("Insira a seguir os dados da primeira carta: \n");

    printf("Letra representando o Estado: \n");
    scanf(" %c", &estado1);

    printf("Código da cidade (insira uma letra seguida de dois números): \n");
    scanf(" %s", &cod1);

    printf("Insira o nome da cidade: \n");
    scanf(" %s", &cidade1);

    printf("Insira a população desta cidade: \n");
    scanf(" %d", &populacao1);

    printf("Insira a área: \n");
    scanf(" %f", &area1);

    printf("Insira o último Pib registrado: \n");
    scanf(" %f", &pib1);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf(" %d", &pturistico1);
     




    printf("Vamos continuar com os dados da segunda carta.\n");

    printf("Letra representando o Estado: \n");
    scanf(" %c", &estado2);

    printf("Código da cidade (insira uma letra seguida de dois números): \n");
    scanf(" %s", &cod2);

    printf("Insira o nome da cidade: \n");
    scanf(" %s", &cidade2);

    printf("Insira a população desta cidade: \n");
    scanf(" %d", &populacao2);

    printf("Insira a área: \n");
    scanf(" %f", &area2);

    printf("Insira o último Pib registrado: \n");
    scanf(" %f", &pib2);

    printf("Insira a quantidade de pontos turísticos: \n\n");
    scanf(" %d", &pturistico2);

    printf("Segue abaixo os dados das 2 cartas cadastradas.\n");
    printf("Carta 1:\n");
    printf("Letra: %c\n", estado1);
    printf("Código da cidade %s\n", cod1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %d\n", area1);
    printf("Pib: %d\n", pib1);
    printf("Pontos turísticos: %d\n\n", pturistico1);

    printf("Carta 2:\n");
    printf("Letra: %c\n", estado2);
    printf("Código da cidade %s\n", cod2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %d\n", area2);
    printf("Pib: %d\n", pib2);
    printf("Pontos turísticos: %d\n\n", pturistico2);

    printf("Obrigado por vir até aqui!");


}