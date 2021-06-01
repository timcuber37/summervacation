#include <iostream>
#include <cstring>

using namespace std;

#include "LStack.cpp"

int main()
{
    LStack* stack = new LStack();
    Element *item;

    stack->Push(new Element(1, "Hello"));
    stack->Push(new Element(2, "World"));
    stack->Push(new Element(10, "This"));
    stack->Push(new Element(11, "Is"));
    stack->Push(new Element(12, "Linked List"));
    stack->Push(new Element(30, "Data_Structures"));
    stack->Print();

    item = stack->Pop();
    cout << "Pop: " << item->str << endl;

    item = stack->Pop();
    cout << "Pop: " << item->str << endl;

    stack->Print();
}
