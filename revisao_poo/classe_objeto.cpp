/*
Em C++, uma classe é um tipo de dado definido pelo programador, que pode conter membros de dados(campos) e
funções membros (métodos).
Um objeto é uma instância de uma classe, segue um exemplo ai:
*/

/*
Uma definição mais abstrata para entender poo:
classe Cachorro{
    caracteristicas do cachorro(dados):
    string nome 
    int idade 
    string cor

    ações do cachorro(o que ele faz/funções):
    void latir();
    void correr();
    void dormir();
    void brincar();
    etc...
};
*/


#include <iostream>
//definição da classe Pessoa
class Pessoa{
public:
    //membros de dados (aka variaveis)
    std::string nome;
    int idade;

    //metodos membros (aka funções)

    //construtor: metodos especiais chamados sempre que um objeto é criado
    //sao utilizados para inicializar os objetos
    Pessoa(std::string n,int i){
        nome = n;
        idade = i;
    }

    void apresentar(){
        std::cout<<"Olá meu nome é "<< nome <<" e tenho "<< idade<< " anos.\n"<<std::endl;
    }
};


//instanciando na função main
int main(void){
    //os dados e metodos sao acessados usando o operador ponto (.)
    //Cria(instancia) objetos da classe pessoa
    Pessoa pessoa1("João",30);
    // pessoa1.nome = "João";
    // pessoa1.idade = 30;

    Pessoa pessoa2("Maria",25);
    // pessoa2.nome = "Maria";
    // pessoa2.idade = 25;

    //Chamando o método membro(funções) para cada objeto
    pessoa1.apresentar();
    pessoa2.apresentar();

    return 0;
}