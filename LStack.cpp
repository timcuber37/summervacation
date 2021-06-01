// Definition of Element class
class Element{
  public: 
    int key;
    char str[20];

    Element(int e_key, const char *e_str) {
        key = e_key;
        strcpy(str, e_str);
    }
};


// Definition of stack node
typedef struct t_stack_node {
    Element *data;
    struct t_stack_node *link;   
} stack_node;


// TODO: Define LStack class 
// Definition of LStack class
class LStack {
  
};

// TODO: Implement member functions of LStack class: 
//       LStack(), ~LStack(), Push(), Pop(), Print(), IsEmpty()
