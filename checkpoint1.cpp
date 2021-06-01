#include <iostream>
#include <string>


// Note: It's ok that all the member variables are public for this
// tiny class.  We'll build up to a more robust and complete linked
// list implementation in lecture 10.
template <class T>
class Node {
public:
  T value;
  Node<T> *ptr;
};



template <class T>
void print(Node<T> *data, const std::string &label) {
  std::cout << label;
  Node<T> *tmp = data;
  while (tmp != NULL) {
    std::cout << " " << tmp->value;
    tmp = tmp->ptr;
  }
  std::cout << std::endl;
}



template <class T>
void reverse(Node<T>* &input) 
{
  Node<T>* temp = input;
  Node<T>* prev = NULL;
  Node<T>* next = NULL;

  while(temp != NULL)
  {
    next = temp->ptr;
    temp->ptr = prev;
    prev = temp;
    temp = next;
  }
  input = prev;
}




int main() {

  // manually create a linked list of notes with 4 elements
  Node<int>* my_list = new Node<int>; 
  my_list->value = 1; 
  my_list->ptr = new Node<int>;
  my_list->ptr->value = 2;
  my_list->ptr->ptr = new Node<int>;
  my_list->ptr->ptr->value = 3;
  my_list->ptr->ptr->ptr = new Node<int>;
  my_list->ptr->ptr->ptr->value = 4;
  my_list->ptr->ptr->ptr->ptr = NULL;

  
  print(my_list,"my_list before: ");
  reverse(my_list);
  print(my_list,"my_list after: ");

  Node<int>* list1 = new Node<int>;
  list1->value = 65; 
  list1->ptr = new Node<int>;
  list1->ptr->value = 21;
  list1->ptr->ptr = new Node<int>;
  list1->ptr->ptr->value = 37;
  list1->ptr->ptr->ptr = new Node<int>;
  list1->ptr->ptr->ptr->value = 876;
  list1->ptr->ptr->ptr->ptr = new Node<int>;
  list1->ptr->ptr->ptr->ptr->value = 69;
  list1->ptr->ptr->ptr->ptr->ptr = NULL;

  print(list1,"list1 before: ");
  reverse(list1);
  print(list1,"list1 after: ");

  Node<std::string>* list2 = new Node<std::string>;
  list2->value = "It's"; 
  list2->ptr = new Node<std::string>;
  list2->ptr->value = "over";
  list2->ptr->ptr = new Node<std::string>;
  list2->ptr->ptr->value = "Anakin!";
  list2->ptr->ptr->ptr = new Node<std::string>;
  list2->ptr->ptr->ptr->value = "I have";
  list2->ptr->ptr->ptr->ptr = new Node<std::string>;
  list2->ptr->ptr->ptr->ptr->value = "the";
  list2->ptr->ptr->ptr->ptr->ptr = new Node<std::string>;
  list2->ptr->ptr->ptr->ptr->ptr->value = "high ground!";
  list2->ptr->ptr->ptr->ptr->ptr->ptr = NULL;

  print(list2,"list2 before: ");
  reverse(list2);
  print(list2,"list2 after: ");

  Node<int>* list3 = NULL;


  print(list3,"list3 before: ");
  reverse(list3);
  print(list3,"list3 after: ");
  // Note: We are not deleting any of the Nodes we created...  so this
  // program has memory leaks!  More on this in Checkpoint 2!

}

// ===========================================================================