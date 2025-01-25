#include<iostream>
#include<string>
using namespace std;
class student
{
public:
string name;
int std;
int mark;

void display()
{
cout << "The person name is: " << name << endl ;
cout << "The person standard is: " << std << endl;
cout << "The person mark is: "<< mark << endl;
}


};


int main()
{
 student student1;
 cout<<"Enter the name :";
 cin>>student1.name;
 cout<<"Enter the class:";
 cin>>student1.std;
 cout<<"Enter the mark :";
 cin>>student1.mark;
 
 student student2;
 cout<<"Enter the name :";
 cin>>student2.name;
 cout<<"Enter the class:";
 cin>>student2.std;
 cout<<"Enter the mark :";
 cin>>student2.mark;
 
 student student3;
 cout<<"Enter the name :";
 cin>>student3.name;
 cout<<"Enter the class:";
 cin>>student3.std;
 cout<<"Enter the mark :";
 cin>>student3.mark;
 
 student1.display();
 student2.display();
 student3.display();

 
}

