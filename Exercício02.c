/*
2. Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do 
segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'
*/

# include <stdio.h>
# include <math.h>
float delta(float a, float b, float c); 
int main (){
    float a,b,c;
    printf("Digite 3 valores: ");
    scanf("%f %f %f", &a, &b, &c);
    delta();
}

float delta(float a, float b, float c){
    float delta; 
    delta = pow(b,2) - 4 * a * b;
    printf("O valor de delta é: %f", delta);
}