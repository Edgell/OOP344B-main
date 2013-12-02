#include <list>
#include <iostream>
using namespace std;

void prnMarks(list<int>& m){
  list<int>::iterator end = m.end() ;
  list<int>::iterator cur = m.begin();
  for(; cur != end; cur++){
    cout<<*cur<<" ";
  }
  cout<<endl;
}


void PlayWithQue(list<int>& marks){
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

  cout<<"---------------------"<<endl;
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
}

int main(){
  list<int> marks;
  PlayWithQue(marks);
  cout<<"----------------"<<endl;
  list<int>::iterator i = marks.begin();
  cout<<*i<<endl;
  i++;
  cout<<*i<<endl;
  marks.erase(i);
  // cout<<*i<<endl; this will cause error
  i = marks.end();
  i--;
  i--;
  marks.insert(i, 9000);
  prnMarks(marks);
  return 0;
}



