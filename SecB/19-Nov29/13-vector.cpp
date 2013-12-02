#include <vector>
#include <iostream>
using namespace std;

void prnMarks(vector<int>& m){
  for(int i=0;i<m.size();i++){
    cout<<m[i]<<" ";
  }
  cout<<endl;
}


int main(){
  vector<int> marks;
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
  return 0;
}