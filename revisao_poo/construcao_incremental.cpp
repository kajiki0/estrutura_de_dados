/*
Objetos maiores podem ser construidos baseando-se em objetos menores pré-existentes,atraves de composição e herança
*/

//exemplo de composição
class Motor{
    //definição do motor
};

class Carro{
private:
    Motor motor;
    //outros membros
};

//exemplo de herança
class Animal{//classe base/pai
    //definição de animal
};
//utiliza os membros da classe base de acordo com as keywords de encapsulamento
class Cachorro : public Animal{ //classe derivada/filho
    //definição de cachorro
};
