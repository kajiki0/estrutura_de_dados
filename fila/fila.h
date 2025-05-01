typedef int ItemType;
const int max_items=100;

class Queue{
private:
    int firstPos,lastPos;
    ItemType* array;


public:
    Queue();  //construtor
    ~Queue(); //destrutor
    bool isEmpty();
    bool isFull();
    void push(ItemType item);
    ItemType pop();
    void show();
};