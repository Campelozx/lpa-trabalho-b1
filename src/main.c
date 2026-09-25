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
    while (continuar == 1) {
        float distancia, peso;
        int modalidade, protecao, tentativas;

        do {
            printf("Informe a distancia em km e maior que 0: ");
            scanf(" %f", &distancia);
            if (distancia <= 0) {
                printf("Valor invalido, tente novamente.\n");
            }
        } while (distancia <= 0);

        do {
            printf("Informe o peso em kg e maior que 0: ");
            scanf(" %f", &peso);
            if (peso <= 0) {
                printf("Valor invalido, tente novamente.\n");
            }
        } while (peso <= 0);

        do {
            printf("Informe a modalidade sendo 1 para economica, 2 para expressa e 3 para prioritaria: ");
            scanf(" %d", &modalidade);
            if (modalidade < 1 || modalidade > 3) {
                printf("Valor invalido, tente novamente.\n");
            }
        } while (modalidade < 1 || modalidade > 3);

        do {
            printf("Contratar protecao adiciional? 1 para sim e 0 para nao: ");
            scanf(" %d", &protecao);
            if (protecao != 0 && protecao != 1) {
                printf("Valor invalido, tente novamente.\n");
            }
        } while (protecao != 0 && protecao != 1);

        do {
            printf("Quantidade de tentativas adicionais (maior ou igual a 0): ");
            scanf(" %d", &tentativas);
            if (tentativas < 0) {
                printf("Valor invalido, tente novamente.\n");
            }
        } while (tentativas < 0);

        float valor_base = calcular_valor_base(distancia);
        float subtotal = valor_base + (distancia * 1.20);

        float adicional_peso = subtotal * obter_percentual_peso(peso);
        float adicional_mod = subtotal * obter_percentual_modalidade(modalidade);

        float custo_protecao = (protecao == 1) ? 7.50 : 0.0;
        float custo_tentativas = tentativas * 4.00;

        float valor_final = subtotal + adicional_peso + adicional_mod + custo_protecao + custo_tentativas;

        printf("Valor final da entrega: R$ %.2f\n", valor_final);

        total_entregas++;
        soma += valor_final;

        if (modalidade == 1) {
            qtd_eco++;
        } 
        else if (modalidade == 2) {
            qtd_exp++;
        }
        else if (modalidade == 3) {
            qtd_prio++;
        }

        if (total_entregas == 1) {
            maior = valor_final;
            menor = valor_final;
        }
        else  {
            if (valor_final > maior) {
                maior = valor_final;
            }
            if (valor_final < menor) {
                menor = valor_final; 
            }
        }

        do {
            printf("Deseja registrar outra entrega? 1 para sim e 0 para nao: ");
            scanf(" %d", &continuar);
            if (continuar != 0 && continuar != 1) {
                printf("Valor invalido, tente novamente.\n");
            }
        } while (continuar != 0 && continuar != 1);
        printf("\n");
    }
    
    return 0;
}
