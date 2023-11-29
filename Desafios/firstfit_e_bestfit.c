#include <stdio.h>
#include <stdlib.h>

// estrutura da lista encadeada
typedef struct Node {
    int size;
    int usado;
    struct Node* prox;
} Node;

// função que insere um nó no final da lista encadeada
void insertNode(Node** head_ref, int size) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->size = size;
    new_node->usado = 0;
    new_node->prox = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    Node* ultimo = *head_ref;
    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    ultimo->prox = new_node;
}

// função para achar o best fit de acordo com o tamanho desejado
Node* achaBestFit(Node* head, int size) {
    Node* best_fit = NULL;
    int best_fit_size = 1000000000;

    while (head != NULL) {
        if (head->size >= size && head->size - size < best_fit_size && !head->usado) {
            best_fit = head;
            best_fit_size = head->size - size;
        }
        head = head->prox;
    }

    return best_fit;
}

// função que a acha o first fit de acordo com o tamanho desejado
Node* achaFirstFit(Node* head, int size) {
    while (head != NULL) {
        if (head->size >= size && !head->usado) {
            return head;
        }
        head = head->prox;
    }

    return NULL;
}

// função que aloca memória usando o algoritmo de alocação desejado
Node* alocamemoria(Node* head, int size, int algoritmo) {
    Node* block = NULL;

    if (algoritmo == 1) {
        block = achaFirstFit(head, size);
    } else if (algoritmo == 2) {
        block = achaBestFit(head, size);
    }

    if (block != NULL) {
        if (block->size == size) {
            block->usado = 1;
        } else {
            block->size -= size;
        }
    }

    return block;
}

// função que mostra o estado atual dos blocos de memória
void mostra_memoria(Node* head) {
    while (head != NULL) {
        if (head->usado) {
            printf("Bloco de memória com tamanho %d está em uso\n", head->size);
        } else {
            printf("Bloco de memória com tamanho %d está livre\n", head->size);
        }
        head = head->prox;
    }
}

// função que mostra o espaço ocupado nos blocos de memória
void mostra_espaco_ocupado(Node* head) {
    int espaco_ocupado = 0;
    while (head != NULL) {
        if (head->usado) {
            espaco_ocupado += head->size;
        }
        head = head->prox;
    }
    printf("Espaços ocupados: %d\n", espaco_ocupado);
}

int main() {
    Node* head = NULL;
    int size, n, i, algoritmo;

    printf("Quantos blocos de memória disponíveis? ");
    scanf("%d", &n);

    printf("Qual tamanho dos blocos de memória?\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &size);
        insertNode(&head, size);
    }

    printf("Qual algoritmo de alocação? (1 for First Fit, 2 for Best Fit) ");
    scanf("%d", &algoritmo);

    printf("Quantos espaços de memória serão necessários? ");
    scanf("%d", &n);

    printf("Coloque os tamanhos dos dados desejados:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &size);
        Node* block = alocamemoria(head, size, algoritmo);
        if (block != NULL) {
            printf("Bloco de memória com tamanho %d foi alocado\n", block->size);
        } else {
            printf("Alocação de memória falhou. Bloco de memória disponível não encontrado.\n");
        }
    }

    mostra_memoria(head);
    mostra_espaco_ocupado(head);

    return 0;
}