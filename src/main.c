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

float obter_percentual_modalidade(int modalidade) {
    if (modalidade == 1) {
        return 0.0;
    }
    if (modalidade == 2) {
        return 0.15;
    }
    if (modalidade == 3) {
        return 0.30;
    }
    return 0.0; 
}

void exibir_resumo(int entregas, float soma, int qtd_eco, int qtd_exp, int qtd_prio, float maior, float menor) {
    printf("RESUMO DA SESSAO\n");
    printf("Total entregas: %d\n", entregas);
    if (entregas > 0) {
        printf("Valor total: R$ %.2f\n", soma);
        printf("Valor medio: R$ %.2f\n", soma / entregas);
        printf("Entregas economicas: %d\n", qtd_eco);
        printf("Entregas expressas: %d\n", qtd_exp);
        printf("Entregas prioritarias: %d\n", qtd_prio);
        printf("Maior valor: %.2f\n", maior);
        printf("Menor valor: %.2f\n", menor);
    }
}

int main() {
    int continuar = 1;

    int total_entregas = 0;
    float soma = 0.0;
    int qtd_eco = 0, qtd_exp = 0, qtd_prio = 0;
    float maior = 0.0, menor = 0.0;
    
    return 0;
}
