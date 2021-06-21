#include "element_class.h"
#include "queue.cpp"

int main()
{
    Queue* queue = new Queue(6);
    Element *item;

    queue->AddQ(new Element(1, "Hello"));
    queue->AddQ(new Element(2, "World"));
    queue->AddQ(new Element(10, "This"));
    queue->AddQ(new Element(11, "Is"));
    queue->AddQ(new Element(12, "Data"));
    queue->AddQ(new Element(15, "Structure"));
    queue->Print();

    item = queue->DeleteQ();
    cout << "Delete: " << item->key << ", " << item->data << endl;

    item = queue->DeleteQ();
    cout << "Delete: " << item->key << ", " << item->data << endl;

    queue->AddQ(new Element(30, "Summer"));
    queue->AddQ(new Element(31, "Vacation"));
    queue->AddQ(new Element(32, "Fun!!!!!"));

    queue->Print();
}
