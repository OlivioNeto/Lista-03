/*

*/

#include <stdio.h>
float menor(float n1, float n2);
int main (){
    float n1,n2;
    printf("Digite dois valores: "); 
    scanf("%f %f", &n1, &n2);
    menor(menor); 
}
float menor(float n1, float n2){
    int menor = 100000;
    if(n1 < n2){
        printf("O menor número é: %f", n1);
    } else{
         printf("O menor número é: %f", n2);
    }
}
