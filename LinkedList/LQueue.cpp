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


// Definition of queue node
typedef struct t_queue_node {
    Element *data;
    struct t_queue_node *link;   
} queue_node;


// TODO: Define LQueue class 
// Definition of LQueue class
class LQueue 
{
private:
	Element head;
	int numElement;
public:
	LQueue()
	{
		head = NULL;
		numNode = 0;
	}
};

// TODO: Implement member functions of LQueue class: 
//       LQueue(), ~LQueue(), AddQ(), DeleteQ(), Print(), IsEmpty()
