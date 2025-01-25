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

 
  void isadult()
  {
   if(age>=18)
   {
   cout<<"So the person is Adult" <<endl;
   }
   else
   {
    cout << "So the person is Child" << endl;
   }  
  }
  void employeeDetails()
  {
   cout<<"The employee name is : " << name <<"\n"<<"The employee location is:"<<location<<"\n"<<"The employee code is:"<<code<<"\n"<<"The employee age is:"<<age<<"\n";
  }
  void companyDetails()
  {
   cout<<companyname<<" "<<companyaddress<<endl;
  }
  
  void increase(int a)
  {
    age=age+a;
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
  employee.employeeDetails();
  employee.companyDetails();
  employee.isadult();
  employee.increase(5);
  cout << "After 5 years the person's age is: " << employee.age << endl;
  employee.isadult();
}
 