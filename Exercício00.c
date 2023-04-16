/*
0. Crie uma função que receba um valor e diga se é par ou ímpar.
*/

#include <stdio.h>
short parimp(short num);
int main(){
    short n1;
    printf("Digite um valor: ");
    scanf("%hd", & n1);
    parimp(); 
}
short parimp(short num){
    if(1 % 2 == 0){
        printf("O número é par");
    } else {
        printf("O número é impar");
    }
}