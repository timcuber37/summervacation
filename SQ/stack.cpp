// Definition of Stack class
class  Stack {
  private:
    int top;
    int max_size;
    Element **stack;    // Strucutre pointer

  public:
    Stack(int num);
    ~Stack();
    bool IsFullS();
    bool IsEmptyS();
    void Push(Element* item);
    Element* Pop();
    int Length() { return top; };
};


Stack::Stack(int num)
{
    top = -1;
    max_size = num;

    // TODO: Create Element array of 'max_size' elements
}


Stack::~Stack()
{
    delete stack;
}


bool Stack::IsFullS()                               // Function that checks if the stack is full
{
    // TODO: Implement IsFulls()
}


bool Stack::IsEmptyS()                            // Function that checks if the stack is empty
{
    // TODO: Implement IsEmpty() 
}


void Stack::Push(Element* item)                  // Function add an element in the stack
{
    // TODO: Implement Push()
}


Element* Stack::Pop()                             // Function that delete one element from the stack
{
    // TODO: Implement Pop()
}
