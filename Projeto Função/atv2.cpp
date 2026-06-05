#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    float x1, y1, x2, y2, distancia;
    distancia = 0;

    printf("Digite as coordenadas do ponto x1: ");
    scanf("%f", &x1);
    printf("Digite as coordenadas do ponto y1: ");
    scanf("%f", &y1);
    printf("Digite as coordenadas do ponto x2: ");
    scanf("%f", &x2);
    printf("Digite as coordenadas do ponto y2: ");
    scanf("%f", &y2);

    distancia = calcularDistancia(x1, y1, x2, y2);
    printf("A distância entre os pontos é: %f\n", distancia);

    return 0;
}