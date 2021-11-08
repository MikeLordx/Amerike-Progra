#include<iostream>
#include "Node.hh"
#include "Queue.hh"

int main()
{

  /*Node* node1{new Node(new Book("book1", 100, "señor raro"))};
  Node* node2{new Node(new Book("book2", 50, "un gato"))};
  Node* node3{new Node(new Book("book3", 356, "un perro"))};
  Node* node4{new Node(new Book("book4", 248, "una liebre"))};

  node1->next = node2;
  node1->next->next = node3;
  node1->next->next->next = node4;

  Node* temp{node1};

  while (temp)
  {
    std::cout << "Book Name: " << temp->data->GetName() << std::endl;
    std::cout << "Book pages count: " << temp->data->GetPagesCount() << std::endl;
    std::cout << "Book Author Name: " << temp->data->GetAuthorName() << std::endl;
    std::cout << std::endl;
    temp = temp->next;
  }*/

  Queue* queue{new Queue()};

  queue->Push(new Book("book1", 100, "señor raro"));
  queue->Push(new Book("book2", 50, "un gato"));
  queue->Push(new Book("book3", 356, "un perro"));
  queue->Push(new Book("book4", 248, "una liebre"));

  queue->Print();

  queue->Pop();
  queue->Print();


  std::cin.get();
  return 0;
}