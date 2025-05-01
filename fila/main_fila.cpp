#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    Queue queue1;
    int option;
    ItemType item;
    cout<<"Queue generator:\n";

    do{
        cout<<"Type 0 to stop the program\n";
        cout<<"Type 1 to push an element\n";
        cout<<"Type 2 to pop an element\n";
        cout<<"Type 3 to print the queue\n";
        cin>>option;
        if(option==1){
            cout<<"Type an element to push into the queue\n";
            cin>>item;
            queue1.push(item);
        }else if(option==2){
            item = queue1.pop();
            cout<<"the removed element is: "<<item<<endl;
        }
        else if(option==3){
            queue1.show();
        }
    }while(option!=0);
    return 0;
}