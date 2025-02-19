//polimorfismo permite que uma única interface seja usada para diferentes
//tipos de entidades.

/*
A ideia geral é que a classe derivada herde da classe base e tenha suas proprias
modificações dependendo do que ela precisar, por isso se chama polimorfismo
*/

//Exemplo de polimorfismo por subtipagem

#include <iostream>


class Animal{
public:
    virtual void fazerSom(){ //virtual significa que esse metodo pode ser redefinido na classe derivada
        std::cout<<"Som generico de animal"<<std::endl;
    }
};

class Cachorro : public Animal{
public:
    void fazerSom() override{ // override serve para indicar que estamos modificando a função virtual
        std::cout<<"Au au!"<<std::endl;
    }
};

class Gato : public Animal{
public:
    void fazerSom() override{
        std::cout<<"Miau!"<<std::endl;
    }
};

int main(){
    Animal* animal1 = new Cachorro();
    Animal* animal2 = new Gato();

    animal1->fazerSom(); //saida: au au!
    animal2->fazerSom(); //saida: miau!

    delete animal1;
    delete animal2;

    return 0;
} 