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

int main() {
    return 0;
}
