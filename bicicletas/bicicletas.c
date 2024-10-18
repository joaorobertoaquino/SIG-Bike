#include <stdio.h>
#include <stdlib.h>

void bicicletas(void){
    int op_bicicleta;
    do{
        system("clear||cls");
        printf("\n*-------------------------------------------------------------------------------*\n");
        printf("*                               Módulo Bicicletas                               *\n");
        printf("*-------------------------------------------------------------------------------*\n");
        printf("|                             1. Cadastrar                                      |\n");
        printf("|                             2. Pesquisar                                      |\n");
        printf("|                             3. Atualizar                                      |\n");
        printf("|                             4. Deletar                                        |\n");
        printf("|                             0. Voltar                                         |\n");
        printf("|                                                                               |\n");
        printf("*-------------------------------------------------------------------------------*\n");
        printf(" Digite a opção desejada: ");
        scanf("%d", &op_bicicleta);
        getchar();
        switch (op_bicicleta) {
            case 1:
                cadastrarBicicleta();
                break;
            case 2:
                pesquisarBicicleta();
                break;
            case 3:
                atualizarBicicleta();
                break;
            case 4:
                deletarBicicleta();
                break;
            case 0:
                break;
            default:
                printf("Valor invalido");
            break;
        }
    }while(op_bicicleta != 0);
}

void cadastrarBicicleta(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Cadastrar Bicicleta                             *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| ID:                                                                           |\n");
    printf("|                                                                               |\n");
    printf("| Modelo:                                                                       |\n");
    printf("| Cor:                                                                          |\n");
    printf("| Marca:                                                                        |\n");
    printf("| Ano de Fabricação:                                                            |\n");
    printf("| Tamanho do Quadro:                                                            |\n");
    printf("|                                                                               |\n");
    printf("|                      Bicicleta cadastrada com sucesso!                        |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void pesquisarBicicleta(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Pesquisar Bicicleta                             *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Informe o ID da Bicicleta:                                                    |\n");
    printf("|                                                                               |\n");
    printf("| Modelo:                                                                       |\n");
    printf("| Cor:                                                                          |\n");
    printf("| Marca:                                                                        |\n");
    printf("| Ano de Fabricação:                                                            |\n");
    printf("| Tamanho do Quadro:                                                            |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void atualizarBicicleta(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                          Atualizar Dados da Bicicleta                         *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Informe o ID da Bicicleta:                                                    |\n");
    printf("|                                                                               |\n");
    printf("|                           ↪Digite os Novos Dados↩                             |\n");
    printf("| Modelo:                                                                       |\n");
    printf("| Cor:                                                                          |\n");
    printf("| Marca:                                                                        |\n");
    printf("| Ano de Fabricação:                                                            |\n");
    printf("| Tamanho do Quadro:                                                            |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}
