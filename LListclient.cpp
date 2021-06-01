#include "LList.cpp"

int main()
{
    LList *list = new LList();
    list_node *node;

    list->Print();
    list->Insert("vat");
    list->Insert("sat");
    list->Insert("cat");
    list->Insert("bat");
    list->Print();

    node = list->GetByData("cat");
    if (node != NULL)
        cout << "GetByData: " << node->data << endl << endl;
    else 
        cout << "GetByData: Not found!" << endl << endl;

    if (node != NULL)
        list->InsertAfterNode("mat", node);

    list->Print();

    list->Invert();
    list->Print();    

    node = list->GetByIndex(2);
    if (node != NULL)
        cout << "GetByIndex: " << node->data << endl << endl;

    list->Delete("cat");
    list->Print();


    // Concat 
    LList *list2 = new LList();
    list2->Insert("111");
    list2->Insert("222");
    list2->Insert("333");
    list2->Print();
  
    list->Concat(list2);
    cout << "List's length: " << list->GetLength() << endl; 
    cout << "List2's length: " << list2->GetLength() << endl;
    list->Print();

    // Copy 
    LList *list3 = new LList();
    list3->Copy(list);
    list3->Print();

    delete list;
    delete list3;
}
