#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"

void clientes(void){
    int op_cliente;
    do{
        system("clear||cls");
        printf("\n");
        printf("\n*-------------------------------------------------------------------------------*\n");
        printf("*                               Módulo Clientes                                   *\n");
        printf("*---------------------------------------------------------------------------------*\n");
        printf("|                                  1. Cadastrar                                   |\n");
        printf("|                                  2. Pesquisar                                   |\n");
        printf("|                                  3. Atualizar                                   |\n");
        printf("|                                  4. Deletar                                     |\n");
        printf("|                                  0. Voltar                                      |\n");
        printf("|                                                                                 |\n");
        printf("*---------------------------------------------------------------------------------*\n");
        printf(" Digite a opção desejada: ");
        scanf("%d", &op_cliente);
        getchar();
        switch (op_cliente) {
            case 1:
                cadastrarCliente();
                break;
            case 2:
                pesquisarCliente();
                break;
            case 3:
                atualizarCliente();
                break;
            case 4:
                deletarCliente();
                break;
            case 0:
                break;
            default:
                printf("Valor invalido");
            break;
        }
    }while(op_cliente != 0);
}

void cadastrarCliente(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                              Cadastrar Cliente                                *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                                                                               |\n");
    printf("| Nome:                                                                         |\n");
    printf("| CPF:                                                                          |\n");
    printf("| Email:                                                                        |\n");
    printf("| Fone:                                                                         |\n");
    printf("| Data de Nascimento:                                                           |\n");
    printf("|                                                                               |\n");
    printf("|                        Cliente cadastrado com sucesso!                        |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void pesquisarCliente(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                          Pesquisar Dados do Cliente                           *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Digite o CPF do Cliente:                                                      |\n");
    printf("|                                                                               |\n");
    printf("| Nome:                                                                         |\n");
    printf("| CPF:                                                                          |\n");
    printf("| Email:                                                                        |\n");
    printf("| Fone:                                                                         |\n");
    printf("| Data de Nascimento:                                                           |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void atualizarCliente(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                         Atualizar Dados do Cliente                            *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Digite o CPF do Cliente:                                                      |\n");
    printf("|                                                                               |\n");
    printf("|                           ↪Digite os Novos Dados↩                             |\n");
    printf("| Nome:                                                                         |\n");
    printf("| CPF:                                                                          |\n");
    printf("| Email:                                                                        |\n");
    printf("| Fone:                                                                         |\n");
    printf("| Data de Nascimento:                                                           |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}

void deletarCliente(void){
    system("clear||cls");
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Excluir Cliente                                 *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Digite o CPF do Cliente:                                                      |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("Tecle <ENTER> para continuar...");
    getchar();
}