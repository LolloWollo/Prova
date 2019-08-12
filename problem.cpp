#include <string>
#include <vector>
#include "book.hh"

class Student
{
  std::string culo = "ti strappo l'ano a cappelle";
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
