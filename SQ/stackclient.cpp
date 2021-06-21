#include "element_struct.h"
#include "stack.cpp"

int main()
{
    Stack* stack = new Stack(5);
    Element *item;

    item = new Element;
    item->key = 1; strcpy(item->data, "Hello");
    stack->Push(item);

    item = new Element;
    item->key = 2; strcpy(item->data, "World");
    stack->Push(item);

    item = new Element;
    item->key = 10; strcpy(item->data, "This");
    stack->Push(item);

    item = new Element;
    item->key = 11; strcpy(item->data, "Is");
    stack->Push(item);

    item = new Element;
    item->key = 12; strcpy(item->data, "Data");
    stack->Push(item);

    item = new Element;
    item->key = 30; strcpy(item->data, "Structure");
    stack->Push(item);

    int i = stack->Length();
    while (!stack->IsEmptyS())
    {
        item = stack->Pop();
        cout << "[" << i << "]: " << item->key << ", " << item->data << endl;
        i--;
    }
}
