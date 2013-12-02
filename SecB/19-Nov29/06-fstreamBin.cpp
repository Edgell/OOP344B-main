
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
  Employee E;
  fstream file("emp.bin",ios::in|ios::binary);
  for(int i=0;i<5;i++){
    file.read((char*)&E, sizeof(Employee));
    cout<<(i+1)<<"---------------------"<<endl<<E<<endl;
  }
  file.seekg((ios::pos_type)0);
  file.read((char*)&E, sizeof(Employee));
  cout<<"0: ---------------------"<<endl<<E<<endl;
  file.seekg((ios::pos_type)(sizeof(Employee)*3));
  file.read((char*)&E, sizeof(Employee));
  cout<<"4: ---------------------"<<endl<<E<<endl;


  return 0;
}
