#include <stdio.h>
#include <string.h>

int main (){

char estado[3];
char codigo[50];
char cidade[50];
float pib;
float area;
int numero;
int populacao;

char estado2[3];
char codigo2[50];
char cidade2[50];
float pib2;
float area2;
int numero2;
int populacao2;



printf("digite seu estado:\n");
scanf("%s[^\n]", &estado);

printf("letra do estado seguida de 1 a 4:\n");
scanf("%s", &codigo);

printf("nome da cidade:\n");
scanf(" %s[^\n]", &cidade);

printf("pib:\n");
scanf("%f", &pib);

printf("area:\n");
scanf("%f", &area);

printf("numero de ponto turístico:\n");
scanf("%d", &numero);

printf("população:\n");
scanf("%d", &populacao);


//============================================================== carta 2



printf("digite seu segundo estado:\n");
scanf("%s[^\n]", &estado2);

printf("codigo da carta seguida de um número de 1 á 4:\n");
scanf("%s", &codigo2);

printf("nome da segunda cidade:\n");
scanf("%s[^\n]", &cidade2);

printf("pib:\n");
scanf("%f", &pib2);

printf("área:\n");
scanf("%f", &area2);

printf("número de ponto turístico:\n");
scanf("%d", &numero2);

printf("população:\n");
scanf("%d", &populacao2);

return 0;

}



