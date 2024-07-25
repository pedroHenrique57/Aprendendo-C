#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para demonstrar variáveis e tipos de dados
void variaveisETipos() {
    int inteiro = 10;
    float decimal = 3.14;
    char caractere = 'A';
    char string[] = "Hello, C!";

    printf("Inteiro: %d\n", inteiro);
    printf("Decimal: %.2f\n", decimal);
    printf("Caractere: %c\n", caractere);
    printf("String: %s\n", string);
}

// Função para demonstrar operadores aritméticos e lógicos
void operadores() {
    int a = 5, b = 10;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("b / a = %d\n", b / a);
    printf("b %% a = %d\n", b % a);

    printf("a < b: %d\n", a < b);
    printf("a > b: %d\n", a > b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
}

// Função para demonstrar controle de fluxo
void controleDeFluxo() {
    int num = 10;

    if (num > 0) {
        printf("O numero é positivo.\n");
    } else {
        printf("O numero é negativo ou zero.\n");
    }

    switch (num) {
        case 10:
            printf("O numero é 10.\n");
            break;
        default:
            printf("O numero não é 10.\n");
            break;
    }

    for (int i = 0; i < 5; i++) {
        printf("For loop, iteracao %d\n", i);
    }

    int i = 0;
    while (i < 5) {
        printf("While loop, iteracao %d\n", i);
        i++;
    }
}

// Função para demonstrar arrays e strings
void arraysEStrings() {
    int numeros[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("Numero[%d]: %d\n", i, numeros[i]);
    }

    char str1[20] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("String concatenada: %s\n", str1);
}

// Função para demonstrar ponteiros e manipulação de memória
void ponteiros() {
    int valor = 10;
    int *ptr = &valor;

    printf("Valor: %d\n", valor);
    printf("Endereco de valor: %p\n", (void*)&valor);
    printf("Ponteiro ptr aponta para: %p\n", (void*)ptr);
    printf("Valor apontado por ptr: %d\n", *ptr);

    // Alocação dinâmica de memória
    int *arr = (int*)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Falha na alocação de memória.\n");
        return;
    }
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    free(arr);
}

// Definição de uma estrutura
struct Ponto {
    int x;
    int y;
};

// Função para demonstrar o uso de estruturas
void estruturas() {
    struct Ponto p1;
    p1.x = 10;
    p1.y = 20;

    printf("Ponto p1: (%d, %d)\n", p1.x, p1.y);
}

// Função principal
int main() {
    printf("=== Variáveis e Tipos de Dados ===\n");
    variaveisETipos();

    printf("\n=== Operadores ===\n");
    operadores();

    printf("\n=== Controle de Fluxo ===\n");
    controleDeFluxo();

    printf("\n=== Arrays e Strings ===\n");
    arraysEStrings();

    printf("\n=== Ponteiros ===\n");
    ponteiros();

    printf("\n=== Estruturas ===\n");
    estruturas();

    return 0;
}
