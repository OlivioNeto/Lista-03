/*
6. Crie uma função em linguagem C que receba 3 números e retorne o maior valor, use a função da questão 4.
*/

#include <stdio.h> 
short maior (short n1, short n2, short n3);
int main(){
    short n1,n2,n3;
    printf("Digite 3 valores: "); 
    scanf("%hd %hd %hd", &n1, &n2, &n3);
    maior();
}
short maior (short n1, short n2, short n3){
    if(n1 > n2 && n1 > n3){
        printf("O maior valor é: %hd", n1); 
    } if (n2 > n1 && n2 > n3){
        printf("O maior valor é: %hd", n2);
    } else{
        printf("O maior valor é: %f", n3);
    }

}
