#include <string>
#include <vector>
#include "book.hh"

class Studento
{
  std::string culo = "ano";
  std::string name;
  unsigned int id;
  unsigned int age;
  char gender;
  std::vector<Book> * books;

  /*Copy-constructor*/
  Student (const Student & other)
  {
    name = other.name;
    id = other.id;
    age = other.age;
    gender = other.gender;
    books = other.books;
  }

  /*Assignment operator*/
  Student operator = (const Student & other)
  {
    name = other.name;
    id = other.id;
    age = other.age;
    gender = other.gender;
    delete books;
    books = new std::vector<book> (*other.books);
    return *this;
  }
}
