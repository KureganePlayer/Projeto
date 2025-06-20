#include <stdio.h>

int main() { 
    
    printf("Olá jogador ( <> -- <> ) \n");
    printf("\n");
    printf("Seja Bem vindo ao jogo !!!\n");
    printf("\n");
    printf("Super Trunfo\n");
    printf("\n");
    printf("Neste jogo você irá escolher entre duas cartas, cada uma representando uma cidade do Brasil.\n");
    printf("Cada carta possui informações sobre a cidade, como população, área, PIB e pontos turísticos.\n");
    printf("O objetivo é comparar as cartas e ver qual cidade tem a melhor estatística em cada categoria.\n");
    printf("\n");
    printf("Vamos começar!\n");
    printf("\n");
    
    int carta_1 = 1;
    int carta_2 = 2;
    
    
    char Estado_1[20] = "A";
    char Estado_2[20] = "B";
   

    char Codigo_carta_1[20] = "A01";
    char Codigo_carta_2[20] = "A02";
   

    char Nome_da_Cidade_1[20] = "São Paulo";
    char Nome_da_Cidade_2[20] = "Rio de Janeiro";
   

    int Populacao_1 = 44000000; // população de São Paulo
    int Populacao_2 = 6700000; // população do Rio de Janeiro
   

    float Area_1 = 24000.48; // área de São Paulo em km²
    float Area_2 = 12000.39; // área do Rio de Janeiro em km²
   

    float pib_1 = 3.13; // pib são paulo
    float pib_2 = 1.30; // pib rio de janeiro

   

    int Numeros_de_pontos_turisticos_1 = 145; // número de pontos turísticos em São Paulo
    int Numeros_de_pontos_turisticos_2 = 160; // número de pontos turísticos no Rio de Janeiro

    


    printf("Carta: %d\n", carta_1);
    printf("Estado da carta: %s\n", Estado_1); 
    printf("Código da carta: %s\n", Codigo_carta_1);
    printf("Nome da cidade: %s\n", Nome_da_Cidade_1);
    printf("População: %d\n", Populacao_1);
    printf("Área (em km²): %.2f\n", Area_1);
    printf("PIB (em trilhões): %.2f\n", pib_1);
    printf("Número de pontos turísticos: %d\n", Numeros_de_pontos_turisticos_1);
    printf("\n \n ");
    printf("Carta: %d\n", carta_2);
    printf("Estado da carta: %s\n", Estado_2);
    printf("Código da carta: %s\n", Codigo_carta_2);
    printf("Nome da cidade: %s\n", Nome_da_Cidade_2);
    printf("População: %d\n", Populacao_2);
    printf("Área (em km²): %.2f\n", Area_2);
    printf("PIB (em trilhões): %.2f\n", pib_2);
    printf("Número de pontos turísticos: %d\n", Numeros_de_pontos_turisticos_2);
    


 return 0;

}