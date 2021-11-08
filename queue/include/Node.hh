#pragma once
#include "Book.hh"

struct Node
{
  Book* data{};
  Node* next{};
  Node(Book* book)
  {
    data = book;
  }
};
