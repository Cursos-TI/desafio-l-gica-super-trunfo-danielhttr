#include <stdio.h>

int main(){
  // Dados da Carta I
    char estado1 = 'S';
    char codigo1[10] = "A01";
    char nomeCidade1[50] = "SaoPaulo";
    int populacao1 = 12000000;
    float area1 = 1521.11;
    float pib1 = 760.5;
    int pontosTuristicos1 = 35;

  // Dados da Carta II
    char estado2 = 'R';
    char codigo2[10] = "B01";
    char nomeCidade2[50] = "RiodeJaneiro";
    int populacao2 = 7000000;
    float area2 = 1182.3;
    float pib2 = 360.9;
    int pontosTuristicos2 = 42;

 // Calcular Densidade Populacional e PIB per capita
    float densidade1 = populacao1/area1;
    float pibpercapita1 = pib1/populacao1;
    printf("Densidade populacional da Carta I: %2.f hab/km²\n", densidade1);
    printf("PIB per capita da Carta I: %.2f reais\n", &pibpercapita1);

    float densidade2 = populacao2/area2;
    float pibpercapita2 = pib2/populacao2;
    printf("Densidade populacional da Carta II: %2.f hab/km²\n", densidade2);
    printf("PIB per capita da Carta II: %.2f reais\n", &pibpercapita2);

 // Fazendo comparação e ditando quem ganhou 
    if (populacao1 > populacao2){
        printf("A Carta I ganhou na categoria população!\n");
    }
    else{
        printf("A Carta II ganhou na categoria população!\n");
    }

    if (area1 > area2){
        printf("A Carta I ganhou na categoria área!\n");
    }
    else{
        printf("A Carta II ganhou na categoria area!\n");
    }

    if (pib1 > pib2){
        printf("A Carta I ganhou na categoria PIB!\n");
    }
    else{
        printf("A Carta II ganhou na categoria PIB!\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf("A Carta I ganhou na categoria Pontos Turísticos!\n");
    }
    else{
        printf("A Carta II ganhou na categoria Pontos Turísticos!\n");
    }

    if (densidade1 > densidade2){
        printf("A Carta I ganhou na categoria Densidade Populacional!\n");
    }
    else{
        printf("A Carta II ganhou na categoria Densidade Populacional!\n");
    }

    if (pibpercapita1 > pibpercapita2){
        printf("A Carta I ganhou na categoria PIB per capita!\n");
    }
    else{
        printf("A Carta II ganhou na categoria PIB per capita!\n");
    }

    printf("A Carta I é a vencedora por 5 pontos a 1!!!");
    
    return 0; 

}