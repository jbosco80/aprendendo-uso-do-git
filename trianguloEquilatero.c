#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
    setlocale(LC_ALL, "");

    int AB, AC, BC;

    printf("Digite 3 lados de um triangulo \n");
    scanf("%d %d %d", &AB, &AC, &BC);

    printf("\n ladoAB = %d", AB);
    printf("\n ladoAC = %d", AC);
    printf("\n ladoBC = %d", BC);

    if (AB == AC && AC == BC) {
        printf("\n Esse triangulo eh equilatero");
    } else if (AB == AC && AB != BC || AC == BC && BC != AB || AB == BC && AC != BC) {
        printf("\n Esse triangulo eh isosceles");
    }else{
       printf("\n Esse triangulo eh escaleno");
    }

    printf("\n");
    system("pause");
}
