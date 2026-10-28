#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lancamentos = 1000;
    int faces[7] = {0}; // Vetor para contar faces de 1 a 6
    int resultado;

    // Inicializa o gerador de numeros aleatorios
    srand(time(NULL));

    printf("Simulando %d lancamentos de um dado de 6 faces...\n\n", lancamentos);

    // Estrutura de repeticao para simular os lancamentos
    for(int i = 0; i < lancamentos; i++) {
        resultado = (rand() % 6) + 1; // Gera numero entre 1 e 6
        faces[resultado]++;
    }

    // Exibe os resultados e as estatisticas
    printf("--- RESULTADOS DAS FACES ---\n");
    for(int f = 1; f <= 6; f++) {
        float porcentagem = ((float)faces[f] / lancamentos) * 100;
        printf("Face %d: %d vezes (%.2f%%)\n", f, faces[f], porcentagem);
    }

    printf("\nSimulacao estatistica concluida com sucesso.\n");
    return 0;
}
