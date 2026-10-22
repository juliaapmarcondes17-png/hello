#include <iostream>
#include <string>

#define MAX 10;

using namespace std;

struct Cliente {
      int id;
      string nome;
      string telefone;
};

struct Filme {
      int codigo;
      string titulo;
      string genero;
      int ano;
      int id_cliente;
};

//Exibir o menu
void mostrarMenu() {
   cout<<"\n########### LOCADORA DE FILMES ############\n";
   cout << "1 - Cadastrar cliente\n";
   cout << "2 - Cadastrar filme\n";
   cout << "3 - Listar clientes\n";
   cout << "4 - Listar filmes\n";
   cout << "5 - Buscar filmes por cliente\n";
   cout << "6 - Relatorio geral\n";
   cout << "7 - sair\n";
   cout << "###################################\n";
   cout << "Digite sua opção:";
}

//Verificar se o cliente existe
int buscarCliente(Cliente clientes[], int n, int id){
     for (int i = 0; i < n; i++){
        if(clientes[i].id == id){
            return i;
        }
     }
     return -1;
}

//Cadastrar um cliente
void cadCliente(Cliente clientes[],int &contClientes){
    if(cotClientes >= MAX){
        cout << "\nATINGIU O NUMERO MAXIMO DE CLIENTES\n";
        return;
    }

    int id;
    cout << "Digite o id do cliente:";
    cin >> id;

    if(buscarCliente(clientes, contClientes, id) != -1){
        cout << "Esse id ja foi cadastrado!\n";
        return;
    }

    clientes[contClientes].id = id;

    cin.ignore();

    cout << "Digite o nome do cliente:";
    getline(cin,clientes[contClientes]. nome);

    cout << "Digite o telefone do cliente:";
    getline(cin,clientes[contClientes]. telefone);

    contClientes++;

    cout << "\nCliente cadastrado com sucesso\n";

}

//Cadastrar um filme
void cadFilme(Filme filmes[], int &contFilmes,
              Cliente clientes[], int contClientes){
       if(contFilmes >= MAX){
        cout << "\nATINGIU O NUMERO MAXIMO DE FILMES\n";
        return;
       }

       int codigo;

       cout << "Digite o codigo do filme:";
       cin >> codigo;

//Verificar de o codigo ja existe
    for(int i = 0; i < contFilmes; i++) {
        if(filmes[i].codigo == codigo){
            cout << "Esse codigo ja foi cadastrado!\n";
            return;
        }
    }
    filmes[contFilmes].codigo = codigo;

    cin.ignore();

    cout << "Digite o titulo do filme:";
    getline(cin, filmes[contFilmes]. titulo);

    cout << "Digite o genero do filme:";
    getline(cin, filmes[contFilmes]. genero);

    cout << "Digite o ano do filme:";
    cin >> filmes[contFilmes].ano;

    int id;

    cout << "Digite o id do cliente que vai alugar\n";
    cout << "(0 para deixar sem aluguel):";
    cin >> id;

    if(id != 0 && buscarCliente(clientes, contClientes, id) == -1){
        cout << "Cliente nao cadastrado! Filme nao regostrado.\n";
        return;
    }

    filmes[contFilmes].id_cliente = id;

    contFilmes++;

    cout << "\nFilme cadastrado com sucesso!\n";
    }

//Lista de todos os clientes
void listarClientes(Cliente clientes[], int n){
   if(n == 0){
    cout << "\nNenhum cliente cadastrado.\n";
    return;
   }

   cout << "\n### CLIENTES CADASTRADOS ###\n";

   for(int i = 0; i < n; i++){
   cout << "____________\n";
   cout << "ID:" << clientes[i].

   }
}

































