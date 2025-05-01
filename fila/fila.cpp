#include <iostream>
#include "fila.h"

using namespace std;

Queue::Queue(){
    firstPos=0;
    lastPos=0;
    array = new ItemType[max_items];
}

Queue::~Queue(){
    delete []array;
}

bool Queue::isEmpty(){
    return (firstPos==lastPos);
}

bool Queue::isFull(){
    return (lastPos-firstPos==max_items);
}

void Queue::push(ItemType item){
    if(isFull()){
        cout<<"queue is full\n element cant be pushed"<<endl;
    }else{
        array[lastPos%max_items] = item;
        lastPos++;
    }
}

ItemType Queue::pop(){
    if(isEmpty()){
        cout<<"queue is empty\n there is no element to remove"<<endl;
        return 0;
    }else{
        firstPos++;
        return array[(firstPos-1)%max_items];
    }
}

void Queue::show(){
    cout<<"Queue:[";
    for(int i = firstPos;i<lastPos;i++){
        cout<<array[i%max_items]<<" ";
    }
    cout << "]\n";
}
