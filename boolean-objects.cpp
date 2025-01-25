#include<iostream>
#include<string>
using namespace std;

class profile
{
  public:
  string companyname;
  string companyaddress;
  string name;
  string location;
  int code;
  int age;
  void check()
  {
   if(age>=18)
   {
    cout<<"adult";
   }
   else
   {
    cout<<"child";
   }
  }
  void increase(int a)
  {
    age=age+a;
  }
  bool eligible()
  {
   if(age>=18)
   {
    return true;
   }
   else
   {
    return false;
   }
  }
  void emp()
  {
   cout<<name<<" "<<location<<" "<<code<<" "<<age<<"\n";
  }
  void cmp()
  {
   cout<<companyname<<" "<<companyaddress<<endl;
  }
  
};
int main()
{
  profile employee;
  cout<<"Enter Employee name     :";
  cin>>employee.name;
  cout<<"Enter Employee location :";
  cin>>employee.location;
  cout<<"Enter Employee code	:";
  cin>>employee.code;
  cout<<"Enter Employee age	:";
  cin>>employee.age;
  cout<<"Enter the company name  :";
  cin>>employee.companyname;
  cout<<"Enter company address   :";
  cin>>employee.companyaddress;
  employee.emp();
  employee.cmp();
  employee.check();
  employee.increase(7);
  if(employee.eligible()==true)
  {
    cout<<"The person is adult";
  }
  else
  {
   cout<<"The person is child labour";
  } 
} 
