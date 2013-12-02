  #define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
#include <cstring>





using namespace std;

class Employee{
  char _name[15];
  char _lastname[30];
  int _empno;
  double _salary;
public:
  Employee(const char* name="", const char* lastname="", int empno=0, double salary=0.0){
     set(name, lastname, empno, salary);
  }
  void set(const char* name="", const char* lastname="", int empno=0, double salary=0.0){
    strcpy(_name, name);
    strcpy(_lastname, lastname);
    _empno = empno;
    _salary = salary;
  }
  ostream& print(ostream& OS)const{
    return OS<<"Name: "<<_name<<" "<<_lastname<<endl<<"EmpNo: "<<_empno
      <<", Salary: "<<_salary;
  }
  virtual ~Employee(){
    //print(cout)<<"is dead!!!!"<<endl;
  }
};
ostream& operator<<(ostream& OS, const Employee& E){
  return E.print(OS);
}
int main(){
  Employee E[5]={
     Employee("John", "Doe", 1234,12345.67),
     Employee("Jack", "Brown", 22345,212345.67),
     Employee("Bill", "Red", 3234,32345.67),
     Employee("Louis", "Clark", 41234,42345.67),
     Employee("Homer", "Simpson", 5234,52345.67)
  };
  fstream file("emp.bin",ios::out|ios::binary);
  for(int i=0;i<5;i++){
    file.write((const char*)&E[i], sizeof(Employee));
  }
  return 0;
}
