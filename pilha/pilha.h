//stack header
typedef int TipoItem;
const int max_itens = 100;

class pilha{
private: //somente a classe pode acessar
    int tamanho;
    TipoItem* estrutura; //vetor

public: //outras operações podem acessar
    pilha(); //construtor
    ~pilha(); //destrutor
    bool estaCheia(); //verifica se a pilha esta cheia
    bool estaVazia(); //verifica se a pilha esta vazia
    void push(TipoItem item); //colocar elementos na pilha
    TipoItem pop(); //remover elemento da pilha
    void imprimir(); //printar a pilha
    int size(); //tamanho da pilha
    
};