// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
#include <stdio.h>
#include <string.h>


int comparar(float x, float y, char* atributo){
    if (strcmp(atributo, "Densidade populacional") == 0) {
        x = 1 / x;
        y = 1 / y;
    }
    if (x > y)
        {
            printf("%s: Carta 1 venceu\n", atributo);
        }else if (x < y)
        {
            printf("%s: Carta 2 venceu\n",atributo);
        }else{
            printf("EMPATE\n");
        }
    return 0;
}



int main() {
    //variáveis
    char estado1, estado2;
    char cod_carta1[4], cod_carta2[4];
    char nome_cidade1[20],nome_cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1,area2,densidade_populacao1,densidade_populacao2;
    float pib1,pib2,pib_capita1,pib_capita2;
    int pontos_turisticos1,pontos_turisticos2;
    float super_poder1,super_poder2;
    
    
    //cadastro das cartas
    printf("---------Cadastro de cartas---------\n");
    
    //carta 1
    printf("\nCarta 1\n");
    
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Codigo da carta de 01 a 04 (ex: %c01, %c03): ", estado1,estado1);
    scanf(" %3s", &cod_carta1);
    
    printf("Nome da cidade: ");
    getchar();
    scanf(" %[^\n]", nome_cidade1);
    
    printf("Populacao da carta: ");
    scanf(" %lu", &populacao1);
    
    printf("Area da carta em km2: ");
    scanf(" %f", &area1);
    
    printf("Pib da carta: ");
    scanf(" %f",&pib1);
    
    printf("Numero de pontos turisticos: ");
    scanf(" %i", &pontos_turisticos1);

    printf("---CARTA 1 CADASTRADA---\n");
    
    //carta 2
    printf("\nCarta 2\n");
    
    printf("Estado: (letra de A a H): ");
    scanf(" %c", &estado2);
    
    printf("Codigo da carta de 01 a 04 (ex: %c01, %c03): ", estado2, estado2);
    scanf(" %3s", &cod_carta2);
    
    printf("Nome da cidade: ");
    getchar();
    scanf(" %[^\n]", nome_cidade2);
    
    printf("Populacao da carta: ");
    scanf(" %lu", &populacao2);
    
    printf("Area da carta em km2: ");
    scanf(" %f", &area2);
    
    printf("Pib da carta: ");
    scanf(" %f",&pib2);
    
    printf("Numero de pontos turisticos: ");
    scanf(" %i", &pontos_turisticos2);
    
    printf("---CARTA 2 CADASTRADA---\n");


    //calculos
    densidade_populacao1 = populacao1/area1;
    densidade_populacao2 = populacao2/area2;

    pib_capita1 = pib1/populacao1;
    pib_capita2 = pib2/populacao2;

    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_capita1 + (1/densidade_populacao1);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_capita2 + (1/densidade_populacao2);

    //exibiçao das cartas
    printf("\nCartas Cadastradas:\n");
    
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("Densidade populacional: %.2f\n", densidade_populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per Capita: %.2f\n", pib_capita1);
    printf("Numero de pontos turisticos: %i\n", pontos_turisticos1);
    printf("\n");
    
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Densidade populacional: %.2f\n", densidade_populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per Capita: %.2f\n", pib_capita2);
    printf("Numero de pontos turisticos: %i\n", pontos_turisticos2);


    //comparando cartas
    printf("\n=+=+=+=+=+=+=BATALHA=+=+=+=+=+=+=\n");
    int escolha1,escolha2;
    


    //escolha de atributos
    printf("Escolha o 1 atributo de comparacao:\n");
    printf("1- Populacao\n2- Area\n3- PIB\n4- Ponto turistico\n5- Densidade populacional\n6- PIB per Capita\n7- Super poder\n");
    scanf("%i",&escolha1);
    
    printf("Escolha o 2 atributo de comparacao:\n");
    if (escolha1 != 1) printf("1 - Populacao\n");
    if (escolha1 != 2) printf("2 - Area\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Ponto turistico\n");
    if (escolha1 != 5) printf("5 - Densidade populacional\n");
    if (escolha1 != 6) printf("6 - PIB per Capita\n");
    if (escolha1 != 7) printf("7 - Super poder\n");
    scanf("%i",&escolha2);
    
    
    
    //comparaçao
    switch(escolha1){
        case(1):
        printf("POPULACAO\n");
        printf("Carta 1 - %s: %lu\n", nome_cidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", nome_cidade2, populacao2);
        comparar(populacao1,populacao2,"Populacao");
        break;
        
        case(2):
        printf("AREA\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, area1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, area2);
        comparar(area1,area2,"Area");
        break;
        
        case(3):
        printf("PIB\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, pib2);
        comparar(pib1,pib2,"PIB");
        break;
        
        case(4):
        printf("PONTOS TURISTICOS\n");
        printf("Carta 1 - %s: %i\n", nome_cidade1, pontos_turisticos1);
        printf("Carta 2 - %s: %i\n", nome_cidade2, pontos_turisticos2);
        comparar(pontos_turisticos1,pontos_turisticos2,"Pontos turisticos");
        break;
        
        case(5):
        printf("DENSIDADE POPULACIONAL\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, densidade_populacao1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, densidade_populacao2);
        comparar(densidade_populacao1,densidade_populacao2,"Densidade populacional");
        break;
        
        case(6):
        printf("PIB PER CAPITA\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, pib_capita1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, pib_capita2);
        comparar(pib_capita1,pib_capita2,"Pib per Capita");
        break;
        
        case(7):
        printf("SUPER PODER\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, super_poder1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, super_poder2);
        comparar(super_poder1,super_poder2,"Super poder");
        break;
    }

    switch(escolha2){
        case(1):
        printf("POPULACAO\n");
        printf("Carta 1 - %s: %lu\n", nome_cidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", nome_cidade2, populacao2);
        comparar(populacao1,populacao2,"Populacao");
        break;
        
        case(2):
        printf("AREA\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, area1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, area2);
        comparar(area1,area2,"Area");
        break;
        
        case(3):
        printf("PIB\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, pib2);
        comparar(pib1,pib2,"PIB");
        break;
        
        case(4):
        printf("PONTOS TURISTICOS\n");
        printf("Carta 1 - %s: %i\n", nome_cidade1, pontos_turisticos1);
        printf("Carta 2 - %s: %i\n", nome_cidade2, pontos_turisticos2);
        comparar(pontos_turisticos1,pontos_turisticos2,"Pontos turisticos");
        break;
        
        case(5):
        printf("DENSIDADE POPULACIONAL\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, densidade_populacao1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, densidade_populacao2);
        comparar(densidade_populacao1,densidade_populacao2,"Densidade populacional");
        break;
        
        case(6):
        printf("PIB PER CAPITA\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, pib_capita1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, pib_capita2);
        comparar(pib_capita1,pib_capita2,"Pib per Capita");
        break;
        
        case(7):
        printf("SUPER PODER\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade1, super_poder1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade2, super_poder2);
        comparar(super_poder1,super_poder2,"Super poder");
        break;
    }

    float atributo1,atributo11, atributo2,atributo22;
    atributo1 = (escolha1 == 1) ? populacao1 :
            (escolha1 == 2) ? area1 :
            (escolha1 == 3) ? pib1 :
            (escolha1 == 4) ? pontos_turisticos1 :
            (escolha1 == 5) ? 1 / densidade_populacao1 :
            (escolha1 == 6) ? pib_capita1 :
            super_poder1;

    atributo2 = (escolha1 == 1) ? populacao2 :
            (escolha1 == 2) ? area2 :
            (escolha1 == 3) ? pib2 :
            (escolha1 == 4) ? pontos_turisticos2 :
            (escolha1 == 5) ? 1 / densidade_populacao2 :
            (escolha1 == 6) ? pib_capita2 :
            super_poder2;

    atributo11 = (escolha2 == 1) ? populacao1 :
             (escolha2 == 2) ? area1 :
             (escolha2 == 3) ? pib1 :
             (escolha2 == 4) ? pontos_turisticos1 :
             (escolha2 == 5) ? 1 / densidade_populacao1 :
             (escolha2 == 6) ? pib_capita1 :
             super_poder1;

    atributo22 = (escolha2 == 1) ? populacao2 :
             (escolha2 == 2) ? area2 :
             (escolha2 == 3) ? pib2 :
             (escolha2 == 4) ? pontos_turisticos2 :
             (escolha2 == 5) ? 1 / densidade_populacao2 :
             (escolha2 == 6) ? pib_capita2 :
             super_poder2;

    float soma1 = atributo1 + atributo11;
    float soma2 = atributo2 + atributo22;
    printf("Soma carta 1: %.2f\nSoma carta 2: %.2f\n", soma1, soma2);
    if (soma1 > soma2){
        printf("Carta 1 venceu!!");
    }else if(soma2 > soma1){
        printf("Carta 2 venceu!!");
    }else{
        printf("EMPATE");
    }

    return 0;
}




