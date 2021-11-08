#include "Book.hh"

Book::Book(const char* name, unsigned int pagesCount, const char* authorName)
{
  this->name = name;
  this->pagesCount = pagesCount;
  this->authorName = authorName;
}

Book::~Book()
{
}

const char* Book::GetName() const
{
  return name;
}
unsigned int Book::GetPagesCount() const
{
  return pagesCount;
}
const char* Book::GetAuthorName() const
{
  return authorName;
}