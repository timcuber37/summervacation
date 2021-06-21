#include <iostream> 
#include <cstring>

using namespace std; 

// Definition of Element class
class Element{
  public: 
    int key;
    char data[20];

    Element(int e_key, const char *e_data) {
        key = e_key;
        strcpy(data, e_data);
    }
};