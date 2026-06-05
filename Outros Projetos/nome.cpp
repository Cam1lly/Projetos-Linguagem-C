#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;
    int soma = 0, maior;

    printf("Digite 5 numeros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    maior = *ptr;

    for (int i = 0; i < 5; i++) {
        soma += *(ptr + i);
        if (*(ptr + i) > maior) {
            maior = *(ptr + i);
        }
    }

    printf("Soma: %d\n", soma);
    printf("Maior numero: %d\n", maior);

    return 0;
}

