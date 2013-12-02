#include <deque>
#include <iostream>
using namespace std;

template <class T>
void prnMarks(deque<T>& m){
  for(int i=0;i<m.size();i++){
    cout<<m[i]<<" ";
  }
  cout<<endl;
}


int main(){
  deque<int> marks;
  if(marks.empty()){
    cout<<"marks is empty"<<endl;
  }
  marks.push_back(1);
  marks.push_back(2);
  marks.push_back(3);
  marks.push_back(4);
  cout<<marks.size()<<endl;
  prnMarks(marks);
  marks.pop_back();
  prnMarks(marks);
  cout<<marks.back()<<endl;
  marks.back() = 400;
  prnMarks(marks);
  marks.front() = 100;
  prnMarks(marks);


  marks.push_front(10);
  marks.push_front(20);
  marks.push_front(30);
  marks.push_front(40);
  cout<<marks.size()<<endl;
  prnMarks(marks);
  marks.pop_front();
  prnMarks(marks);
  cout<<marks.front()<<endl;
  marks.front() = 4000;
  prnMarks(marks);
  marks.back() = 1000;
  prnMarks(marks);

  return 0;
}