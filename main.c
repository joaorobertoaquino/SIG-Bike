#include <stdio.h>
#include <stdlib.h>

void telaInicial(void);
void clientes(void);
void bicicletas(void);
void patinetes(void);
void locacao(void);
void relatorios(void);
void informacoes(void);

//Módulo Clientes
void cadastrarCliente(void);
void pesquisarCliente(void);
void atualizarCliente(void);
void deletarCliente(void);

//Módulo Bicicletas
void cadastrarBicicleta(void);
void pesquisarBicicleta(void);
void atualizarBicicleta(void);
void excluirBicicleta(void);

//Módulo Patinetes
void cadastrarPatinete(void);
void pesquisarPatinete(void);
void atualizarPatinete(void);
void deletarPatinete(void);

//Módulo Locação
//Relatórios
//Informações


int main(){
    telaInicial();

    clientes();
    cadastrarCliente();
    pesquisarCliente();
    atualizarCliente();
    deletarCliente();

    bicicletas();
    cadastrarBicicleta();
    pesquisarBicicleta();
    atualizarBicicleta();
    excluirBicicleta();

    patinetes();
    cadastrarPatinete();
    pesquisarPatinete();
    atualizarPatinete();
    deletarPatinete();

    locacao();
    relatorios();
    informacoes();
    return 0;
}

void telaInicial(void){
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                         Seja Bem Vindo ao SIG - Bike                          |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                            1. Módulo Clientes                                 |\n");
    printf("|                            2. Módulo Bicicletas                               |\n");
    printf("|                            3. Módulo Patinetes                                |\n");
    printf("|                            4. Módulo Locação                                  |\n");
    printf("|                            5. Relatórios                                      |\n");
    printf("|                            6. Informações                                     |\n");
    printf("|                            0. Sair                                            |\n");
    printf("*-------------------------------------------------------------------------------*\n");

}

void clientes(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Módulo Clientes                                 *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                             1. Cadastrar                                      |\n");
    printf("|                             2. Pesquisar                                      |\n");
    printf("|                             3. Atualizar                                      |\n");
    printf("|                             4. Deletar                                        |\n");
    printf("|                             0. Voltar                                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void cadastrarCliente(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                              Cadastrar Cliente                                *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Nome:                                                                         |\n");
    printf("| CPF:                                                                          |\n");
    printf("| Email:                                                                        |\n");
    printf("| Fone:                                                                         |\n");
    printf("| Data de Nascimento:                                                           |\n");
    printf("|                                                                               |\n");
    printf("|                        Cliente cadastrado com sucesso!                        |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}


void pesquisarCliente(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                          Pesquisar Dados do CLiente                           *\n");
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
}

void atualizarCliente(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                         Atualizar Dados do CLiente                            *\n");
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
}

void deletarCliente(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Excluir CLiente                                 *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Digite o CPF do Cliente:                                                      |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}


void bicicletas(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Módulo Bicicletas                               *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                             1. Cadastrar                                      |\n");
    printf("|                             2. Pesquisar                                      |\n");
    printf("|                             3. Atualizar                                      |\n");
    printf("|                             4. Deletar                                        |\n");
    printf("|                             0. Voltar                                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void cadastrarBicicleta(void){
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
}

void pesquisarBicicleta(void){
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
}

void atualizarBicicleta(void){
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
}

void excluirBicicleta(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Excluir Bicicleta                               *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Informe o ID da bicicleta à excluir:                                         |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void patinetes(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Módulo Patinetes                                *\n");
    printf("*--------------------------------------------------------------------------------*\n");
    printf("|                             1. Cadastrar                                      |\n");
    printf("|                             2. Pesquisar                                      |\n");
    printf("|                             3. Atualizar                                      |\n");
    printf("|                             4. Deletar                                        |\n");
    printf("|                             0. Voltar                                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
} 

void cadastrarPatinete(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Cadastrar Patinete                              *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| ID:                                                                           |\n");
    printf("|                                                                               |\n");
    printf("| Modelo:                                                                       |\n");
    printf("| Cor:                                                                          |\n");
    printf("| Marca:                                                                        |\n");
    printf("| Ano de Fabricação:                                                            |\n");
    printf("| Bateria (capacidade):                                                         |\n");
    printf("|                                                                               |\n");
    printf("|                      Patinete cadastrado com sucesso!                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}


void pesquisarPatinete(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Pesquisar Patinete                              *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Informe o ID do Patinete:                                                     |\n");
    printf("|                                                                               |\n");
    printf("| Modelo:                                                                       |\n");
    printf("| Cor:                                                                          |\n");
    printf("| Marca:                                                                        |\n");
    printf("| Ano de Fabricação:                                                            |\n");
    printf("| Bateria (capacidade):                                                         |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void atualizarPatinete(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                          Atualizar Dados do Patinete                          *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Informe o ID do Patinete:                                                     |\n");
    printf("|                                                                               |\n");
    printf("|                           ↪Digite os Novos Dados↩                             |\n");
    printf("| Modelo:                                                                       |\n");
    printf("| Cor:                                                                          |\n");
    printf("| Marca:                                                                        |\n");
    printf("| Ano de Fabricação:                                                            |\n");
    printf("| Bateria (capacidade):                                                         |\n");
    printf("|                                                                               |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void deletarPatinete(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Deletar Patinete                                *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| Informe o ID do patinete a excluir:                                           |\n");
    printf("|                                                                               |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void locacao(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                               Módulo Locação                                  *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                             1. Realizar Locação                               |\n");
    printf("|                             2. Devolver Bicicleta/Patinete                    |\n");
    printf("|                             3. Consultar Locação                              |\n");
    printf("|                             0. Voltar                                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void relatorios(void){
    printf("\n*-------------------------------------------------------------------------------*\n");
    printf("*                                Módulo Relatório                               *\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                             1. Lista Geral de Clientes                        |\n");
    printf("|                             2. Lista Geral de Bicicletas                      |\n");
    printf("|                             3. Lista Geral de Patinetes                       |\n");
    printf("|                             4. Veículos mais Alugados                         |\n");
    printf("|                             5. Histórico de Alugueis                          |\n");
    printf("|                             0. Voltar                                         |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}

void informacoes(void){
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                               Informações                                     |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("| O SIG-Bike é um sistema simples destinado à gestão de uma empresa de locação  |\n");
    printf("| de bicicletas e patinetes. Este sistema apresenta módulos especializados que  |\n");
    printf("| facilitam a administração de clientes, bicicletas e patinetes, tornando o     |\n");
    printf("| processo de locação mais ágil e eficiente.                                    |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                             Desenvolvedores:                                  |\n");
    printf("*-------------------------------------------------------------------------------*\n");
    printf("|                        Ariadny Dantas | @ariadnyD                             |\n");
    printf("|                        João Roberto   | @joaorobertoaquino                    |\n");
    printf("*-------------------------------------------------------------------------------*\n");
}