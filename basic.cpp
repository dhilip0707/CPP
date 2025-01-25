#include<iostream>
#include<string>
using namespace std;
class about   // class and class name
{
  public:    // access specifier
  string name;// attribute(variable)
  string place;//attribute(variable)
  int age;//attribute(variable)
};
int main() // main function
{
  about person; //class name and object
  person.name="dhilip"; 
  person.place="cbe";
  person.age=20;
  cout<<person.name<<"\n"<<person.place<<"\n"<<person.age; //print
}
