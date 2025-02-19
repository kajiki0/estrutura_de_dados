/*encapsulamento une os dados e as funções que manipulam esses dados, protegendo-os
contra interferencias externas e uso indevido

a ideia é deixa o programa mais flexivel e facil de modificar(todo o proposito de poo foi criado para essa ideia de reutilização)

as keywords para isso são:
public : os membros sao acessiveis a partir de qualquer função
private: membros sao acessiveis somente dentro das funções membro e amigos(friend) da classe
protected: é uma mistura do public e private, é visivel somente para membros da classe e para subclasses

esse tipo de controle é para manter uma implementação mais segura e tambem para informar outros programadores como utilizar a sua classe

*/

#include <iostream>

class ContaBancaria{
private:
    float saldo;
public:
    void depositar(float valor){
        saldo+=valor;
    }
    void sacar(float valor){
        if(valor <= saldo)
            saldo -= valor;
        else
            std::cout<<"Saldo insuficiente." <<std::endl;
    }
};