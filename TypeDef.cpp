#include <iostream>
#include <vector> // you need this library to use vector datatype

// typedef std::vector<std::pair<std::string, int>> pairlist_t; // when using typedef end the variable name with a '_t' for type
typedef std::string string_t;
using number_t = int; // this method of type definition is more common because of its compatability with templates

int main()
{
    // typedef = reserved keyword used to create an additional name (alias) for another data type.

    // pairlist_t pairlist; // we just created a pairlist_t type instance with the name pairlist (I have no idea what this datatype is yet but that is ok)

    string_t name = "Emmanuel Urias";
    number_t age = 18;
    string_t space = "\n";

    std::cout << name << space;
    std::cout << age;

    return 0;
}