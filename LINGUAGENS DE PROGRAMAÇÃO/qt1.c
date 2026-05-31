#include <stdio.h>

// Variável global para demonstrar o efeito de "aliasing"
int x;

// 1. Simulação de Passagem por Referência (via ponteiros)
// Qualquer alteração no 'param' reflete imediatamente no 'x' global.
void passagem_por_referencia(int *param) {
    *param = *param + 5;     // Modifica 'x' diretamente.
    x = x + *param;          // Usa o 'x' global já modificado.
}

// 2. Simulação de Passagem por Valor-Resultado
// O valor é copiado na entrada (param_local). As operações ocorrem isoladas.
// Ao final da execução, o valor local é copiado de volta para o argumento (resultado_out).
void passagem_por_valor_resultado(int param_local, int *resultado_out) {
    param_local = param_local + 5;  // Modifica apenas a cópia local.
    x = x + param_local;            // Usa o 'x' global original (que não foi alterado ainda).
    *resultado_out = param_local;   // Cópia de volta (resultado) ao final da execução.
}

int main() {
    // --- Teste da Passagem por Referência ---
    x = 10;
    printf("--- Por Referência ---\n");
    printf("Valor inicial de x: %d\n", x);
    passagem_por_referencia(&x);
    printf("Valor final de x: %d\n\n", x); 

    // --- Teste da Passagem por Valor-Resultado ---
    x = 10;
    printf("--- Por Valor-Resultado ---\n");
    printf("Valor inicial de x: %d\n", x);
    passagem_por_valor_resultado(x, &x); // Passa o valor (entrada) e o endereço (saída)
    printf("Valor final de x: %d\n", x); 

    return 0;
}