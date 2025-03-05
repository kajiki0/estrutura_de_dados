#include <iostream>
#include "pilha.h"
using namespace std;

pilha::pilha() //construtor
{
   tamanho = 0;
   estrutura = new TipoItem[max_itens]; 
}
pilha::~pilha() //destrutor(liberar espaço)
{
   delete [] estrutura;
}
bool pilha::estaCheia() //verifica se a pilha esta cheia
{
   return (tamanho == max_itens); //se tamanho==max_itens, retorna true
}
bool pilha::estaVazia() //verifica se a pilha esta vazia
{
   return (tamanho==0); //se tamanho==0(vazio), retorna true
}
void pilha::push(TipoItem item) //colocar elementos na pilha
{
   //verificação para realizar push
   if(estaCheia()){
      cout<<"A pilha esta cheia\n";
      cout<<"Nao é possivel inserir elementos\n";
   }else{
      estrutura[tamanho] = item;
      tamanho++; //tamanho aumenta para ter espaço para proximo elemento
   }
    
}
TipoItem pilha::pop() //remover elemento da pilha
{
   //verificação para realizar um pop
   if(estaVazia()){
      cout<<"A pilha esta vazia\n";
      cout<<"Nao há elementos para remover\n";
   }else{
      tamanho--; //tamanho reduz,pois removemos um elemento do topo
      return estrutura[tamanho]; //retorna a pilha com o elemento removido do topo
      
   }

}
void pilha::imprimir() //printar a pilha
{
   cout<<"Pilha: [";
   for(int i=0;i<tamanho;i++){
      cout<<estrutura[i]<<" ";
   }
   cout<<"]\n";

}
int pilha::size() //tamanho da pilha
{
   return tamanho;
}
    