#include <stdio.h>
#include <stdlib.h>

void inverter_string(char *string){ //funcao que inverte uma string
    int i = 0;
    int j = 0;
    char aux;
    while(string[i] != '\0'){ //Tamanho da string é salvo em i
        i++;
    }
    i--;
    while(j < i){
        aux = string[j];
        string[j] = string[i];
        string[i] = aux;
        j++;
        i--;
    }
}

int main () {
    char string[100]; //string a ser invertida
    printf("Digite uma string para ser invertida: ");
    gets(string);
    printf("String original: %s\n", string);
    inverter_string(string);
    printf("String invertida: %s", string);

    return 0;
}