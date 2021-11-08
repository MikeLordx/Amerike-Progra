#include "Queue.hh"

Queue::Queue()
{
}

Queue::~Queue()
{
}

bool Queue::IsEmpty()const
{
    return head == nullptr;
} 

Node* Queue::Peek() const
{
  if(IsEmpty())
  {
    std::cout << "Queue is Empty" << std::endl;
    return nullptr;
  }
  else
  {
    return head;
  }
}
void Queue::Pop()
{
   if(IsEmpty())
  {
    std::cout << "Queue is Empty" << std::endl;
  }
  else
  {
    Node* temp{head};
    head = head->next;
    delete temp;     
  }
}
void Queue::Push(Book* book)
{
    if(IsEmpty())
    {
        head = new Node{book};
        end = head;
    }
    else
    {
        if(head->next == nullptr)
        {
            Node* temp{new Node(book)};
            end = temp;
            head->next = temp;
        }
        else
        {
            Node* temp{end};
            end = new Node(book);
            temp->next = end;
        }
    }
}
void Queue::Print()
{
    Node* temp{head};
    while (temp)
    {
        std::cout<< "Book name: "<<temp->data->GetName()<<std::endl;
        std::cout<< "Book author: "<<temp->data->GetAuthorName()<<std::endl;
        std::cout<< "Book pages: "<<temp->data->GetPagesCount()<<std::endl;
        temp = temp->next;
    }
    std::cout << std::endl;
    
}