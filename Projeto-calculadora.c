#include <stdio.h>
#include <math.h>

int main(){
    char operador;
    double x, y;
       
    scanf("%lf%c%lf",&x,&operador,&y);// le dois valores e um caractere
    
    switch (operador){
    case '+':
        printf("%lf",x+y);// realiza adição
        break;
    case '-':
        printf("%lf",x-y);//subtração
        break;
    case '*':
        printf("%lf",x*y);//multiplicação
        break;
    case '/':
        if(y != 0){printf("%lf",x/y);}// se o divisor for menor que zero, realiza a operação de divisao
        else{printf("DIVISAO INVALIDA");}
        break;
    case '%':
        printf("%lf",fmod(x,y));// resto da divisão de x por y
        break;
    case '~':
        printf("%lf",pow(x,y));// potênciação de x por y
        break;
    case '=':
        if (x == y){printf("true");}// verifica se x é igual a y e imprime verdadeiro ou falso
        else{printf("false");}
        break;
    case '!':
        if(x!=y){printf("true");}// verifica se x é diferente de y e imprime verdadeiro ou falso
        else {printf("false");}
        break;
    case '<':
        if(x<y){printf("true");}// verifica se x é menor que y e imprime verdadeiro ou falso
        else {printf("false");}
        break;
    case '>':
        if(x>y){printf("true");}// verifica se x é maior que y e imprime verdadeiro ou falso
        else {printf("false");}
        break;
    case '^':
        if((x+y)>1){printf("true");}//verifica a expressão AND
        else {printf("false");}
        break;
    case 'x':
        if(x!=y){printf("true");//verifica a expressão XOR
        break;}
        if(x==y) {printf("false");}
        break;
    case 'v':
        if((x+y)>0){printf("true");}//verifica a expressão OR
        else {printf("false");}
        break;    
    }
    return 0;
}
