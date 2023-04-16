/*
1. Crie uma função que receba um valor e informe se ele é positivo ou não.
*/

#include <stdio.h>
float conf(float n1);
int main (){
    float n1;
    printf("Digite um valor: ");
    scanf("%f",& n1);
    conf();
}
float conf(float n1){
    if(n1>0){
        printf("O valor é positivo");
    } else{
        printf("O número é negativo");
    }
}