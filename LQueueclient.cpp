#include <iostream>
#include <cstring>

using namespace std;

#include "LQueue.cpp"


int main()
{
    LQueue* queue = new LQueue();
    Element *item;

    queue->AddQ(new Element(1, "Hello"));
    queue->AddQ(new Element(2, "World"));
    queue->AddQ(new Element(10, "This"));
    queue->AddQ(new Element(11, "Is"));
    queue->AddQ(new Element(12, "Linked List"));
    queue->Print();

    item = queue->DeleteQ();
    cout << "Delete: " << item->key << ", " << item->str << endl;

    item = queue->DeleteQ();
    cout << "Delete: " << item->key << ", " << item->str << endl;

    queue->AddQ(new Element(30, "Data"));
    queue->AddQ(new Element(31, "Structure"));
    queue->AddQ(new Element(32, "Fun!!!!!"));

    queue->Print();
}
