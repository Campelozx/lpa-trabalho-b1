#include <stdio.h>

float calcular_valor_base(float distancia) {
    if (distancia <= 5.00) {
        return 8.00;
    }
    if (distancia <= 15.00) {
        return 12.00;
    }
    if (distancia <= 30.00) {
        return 18.00;
    }
    return 0.25;
}

float obter_percentual_peso(float peso) {
    if (peso <= 2.0) {
        return 0.0;
    }
    if (peso <= 5.0) {
        return 0.05;
    }
    if (peso <= 10.0) {
        return 0.10;
    }
    return 0.20;
}

int main() {
    return 0;
}
