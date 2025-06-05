#include<stdio.h>
#include<string.h>


int main(void){

    char titulo[50];
    char nomeArquivo[50];
    printf("Digite o nome do arquivo que foi gerado: ");
    fgets(titulo, 50, stdin);

    strcpy(nomeArquivo, titulo);
    strcat(nomeArquivo, ".txt");

    FILE * arquivo = NULL;
    arquivo = fopen(nomeArquivo, "r");


    if (arquivo == NULL){
        printf("Arquivo não encontrado\n");
    } else{
        char personagens[50];
        char opcao;
        while(fgets(personagens, 50, arquivo)){
            printf("Digite P para ver o proximo personagem ou F para sair: ");
            scanf(" %c", &opcao);
            getchar();


            if (opcao == 'F' || opcao == 'f'){
                break;
            } else if (opcao == 'P' || opcao == 'p'){
                printf("%s", personagens);
                
            } else{
                printf("Comando invalido\n");
            }
        
            
        }
    }

    fclose(arquivo);
    

    return 0;
}