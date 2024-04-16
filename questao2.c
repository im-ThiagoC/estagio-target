#include <stdio.h>

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}


int main (){
    int num; //numero a ser checado
    printf("Digite um numero para saber se ele pertence a sequencia de fibonnaci: ");
    scanf("%d", &num);

    if(num < 0){
        printf("O numero %d nao pertence a sequencia de Fibonacci", num);
        return 0;
    }

    int i;
    int fib = -1; //inicialzei com -1 para garantir que o loop vai rodar pelo menos uma vez

    for(i = 0; fib < num; i++){
        fib = fibonacci(i);
        if(fib == num){
            printf("O numero %d pertence a sequencia de Fibonacci", num);
            return 0;
        }
    }
    printf("O numero %d nao pertence a sequencia de Fibonacci", num);
    return 0;
}