/*
4. Crie uma função em linguagem C que receba 2 números e retorne o maior valor.
*/

#include <stdio.h>
short maior(short n1, short n2);
int main(){
    short n1,n2;
    printf("Digite dois valores");
    scanf("%hd %hd", &n1, &n2);
    maior(maior);
    printf("O maior número é: %hd", maior); 
}

short maior(short n1, short n2){
    short maior; 
    if(n1 > n2){
        maior = n1; 
    } else{
        maior = n2; 
    } 
    return maior;
}