#include <stdio.h>

int main(){
    
    int dia;
   
    while (1) {
        printf("Qual o dia da semana?(Digite 0 para finalizar) ");
        scanf("%d", &dia);
        
        if (dia == 0) {
            printf("Fechando programa...");
            break;
        } else {
            switch (dia) {
                case 1:
                printf("O dia da semana é domingo.\n");
                break;
                
                case 2:
                printf("O dia da semana é segunda.\n");
                break;    
                
                case 3:
                printf("O dia da semana é terça.\n");
                break;
                
                case 4:
                printf("O dia da semana é quarta.\n");
                break;
                
                case 5:
                printf("O dia da semana é quinta.\n");
                break;
                
                case 6:
                printf("O dia da semana é sexta.\n");
                break;
                
                case 7:
                printf("O dia da semana é sábado.\n");
                break;                
                
                default:
                printf("O dia não é válido.\n");
                break;
            }    
        }  
    }
    return 0;
}