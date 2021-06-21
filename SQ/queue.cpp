// Definition of Queue class
class  Queue {
  private:
    int front, rear;
    int max_size;
    Element **queue;

  public:
    Queue(int num);
    ~Queue();
    bool IsFullQ();
    bool IsEmptyQ();
    void AddQ (Element* item);
    Element* DeleteQ();
    void Print();
};


Queue::Queue(int num)
{
    front = rear = 0;
    max_size = num + 1;
    data = new char[max_size];
     // TODO: Create Element array of 'max_size' elements
}

Queue::~Queue()
{
    delete queue;
}


bool Queue::IsFullQ()                                   // Function that checks if the queue is full
{
    if(queue->data.size() == max_size)
    {
        return true;
    }
    return false;
}

bool Queue::IsEmptyQ()                                  // Function that checks if the queue is empty
{
    if(queue->data.size() == 0)
    {
        return true;
    }
    return false;
}


void Queue::AddQ(Element* item)                         // Adding Element to the queue
{
    // TODO: Implement AddQ()
    num++;
}

Element* Queue::DeleteQ()                               // Deleting Element from the queue
{
    // TODO: Implement DeleteQ()
}


void Queue::Print ()                                    // Printing All Elements in the queue
{
    for(int i = 0; i < num; i++)
    {
        std::cout << data[i] << std::endl;
    }
}
