#include <stdio.h>
#include <stdlib.h>
#include "clientes/clientes.h"
#include "bicicletas/bicicletas.h"
#include "patinetes/patinetes.h"
#include "locacao/locacao.h"
#include "relatorios/relatorios.h"

//Telas Principais
void telaInicial(void);
void informacoes(void);


int main(){
    int op_pric;
    do{
        telaInicial();
        scanf("%d", &op_pric);
        getchar();
        switch (op_pric){
            case 1:
                clientes();
                break;

            case 2:
                bicicletas();
                break;

            case 3:
                patinetes();
                break;

            case 4:
                locacao();
                break;

            case 5:
                relatorios();
                break;

            case 6:
                informacoes();
                break;

            case 0:
                printf("Saindo do sistema...\n");
                exit(0);

            default:
                printf("Opção inválida! Tente novamente.\n");
                telaInicial();
            break;
        }
    }while(op_pric != 0);
    return 0;
}


void telaInicial(void){
    system("clear||cls");
    printf("\n");
    printf("╔═══════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                  🛴  Locadora de Patinetes e Bicicletas  🚴                   ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
    printf("║                            1. Módulo Clientes                                 ║\n");
    printf("║                            2. Módulo Bicicletas                               ║\n");
    printf("║                            3. Módulo Patinetes                                ║\n");
    printf("║                            4. Módulo Locação                                  ║\n");
    printf("║                            5. Relatórios                                      ║\n");
    printf("║                            6. Informações                                     ║\n");
    printf("║                                                                               ║\n");
    printf("║                            0. Sair do Sistema                                 ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
    printf("\n");
    printf(" Digite o número da opção desejada: ");
}

void informacoes(void){
    system("clear||cls");
    printf("\n");
    printf("╔═══════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                               Informações                                     ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
    printf("║ O SIG═Bike é um sistema simples destinado à gestão de uma empresa de locação  ║\n");
    printf("║ de bicicletas e patinetes. Este sistema apresenta módulos especializados que  ║\n");
    printf("║ facilitam a administração de clientes, bicicletas e patinetes, tornando o     ║\n");
    printf("║ processo de locação mais ágil e eficiente.                                    ║\n");
    printf("╔═══════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                             Desenvolvedores:                                  ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
    printf("║                        Ariadny Dantas ║ @ariadnyD                             ║\n");
    printf("║                        João Roberto   ║ @joaorobertoaquino                    ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════╝\n");
    getchar();
    printf("Tecle <ENTER> para continuar...");
}