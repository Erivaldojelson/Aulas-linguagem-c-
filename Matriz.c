#include <stdio.h>
#include <stdlib.h>

// Função para comparar dois valores inteiros
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Função para copiar os valores do vetor inicial para o vetor resultado
void copiar_vetor(int *vetor_inicial, int *vetor_resultado, int tamanho) {
    int i, j = 0, k = tamanho - 1;
    // Ordena o vetor inicial em ordem crescente
    qsort(vetor_inicial, tamanho, sizeof(int), compare);
    // Copia os valores pares em ordem não decrescente
    for (i = 0; i < tamanho; i++) {
        if (vetor_inicial[i] % 2 == 0) {
            vetor_resultado[j] = vetor_inicial[i];
            j++;
        }
    }
    // Copia os valores ímpares em ordem não crescente
    for (i = tamanho - 1; i >= 0; i--) {
        if (vetor_inicial[i] % 2 != 0) {
            vetor_resultado[k] = vetor_inicial[i];
            k--;
        }
    }
}

int main() {
    int n, i;
    // Pede ao usuário para informar o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor_inicial[n], vetor_resultado[n];
    // Pede ao usuário para preencher o vetor com valores inteiros não negativos
    printf("Digite %d valores inteiros nao negativos:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor_inicial[i]);
    }
    // Chama a função para copiar os valores do vetor inicial para o vetor resultado
    copiar_vetor(vetor_inicial, vetor_resultado, n);
    // Salva os valores do vetor resultado em um arquivo
    FILE *arquivo = fopen("vetor_resultado.txt", "w");
    if (arquivo != NULL) {
        for (i = 0; i < n; i++) {
            fprintf(arquivo, "%d ", vetor_resultado[i]);
        }
        fclose(arquivo);
        printf("Valores do vetor resultado foram salvos no arquivo 'vetor_resultado.txt'\n");
    } else {
        printf("Erro ao abrir o arquivo!\n");
    }
    return 0;
}
