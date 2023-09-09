#include <stdio.h>

int main(){
    
    int m, c, p;
    float i;
    for (m =1; m <=3; m++){
    
        printf("Digite o período requisitado: ");
        scanf("%d", &p);
        printf("Digite o tempo de CPU: ");
        scanf("%d", &c);
        
        i += (float)c/p;
        
    }
    if (i <=1) {
        printf("O sistema é escalonável.");
    } else {
        printf("O sistema não é escalonável");
    }
    return 0;
}