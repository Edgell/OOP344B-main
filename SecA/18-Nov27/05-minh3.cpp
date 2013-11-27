#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class A{
private:
  int data;
public: 
  A(int data = -1){  // defaults the A with -1
    this->data = data;
  }
  int print(){
    cout<<"A: "<<data<<endl;
    return data;
  }
};
class B: public A{
private:
  int data;
public: 
  B(int data){
    this->data = data;
  }
  int print(){
    A::print();
    cout<<"B: "<<data<<endl;
    return data;
  }
};
class C: public A{
private:
  int data;
public: 
  C(int data = 10):A(data/2){
    this->data = data;
  }
  int print(){
    A::print();
    cout<<"C: "<<data<<endl;
    return data;
  }
};
class D:public B, public C{
private:
  int data;
public: 
  D(int data):B(data/2){
    this->data = data;
  }
  int print(){
    B::print();
    C::print();
    cout<<"D: "<<data<<endl;
    return data;
  }
};
int main(){
  D d(60);
  d.print();
  cout<<"-----------------"<<endl;
  //A(d).print();// wont work cause two "A"s are ther
  A(B(d)).print();
  cout<<"-----------------"<<endl;
  A(C(d)).print();
  cout<<"-----------------"<<endl;
  d.B::A::print();
  cout<<"-----------------"<<endl;
  d.C::A::print();
  cout<<"-----------------"<<endl;
  return 0;
}