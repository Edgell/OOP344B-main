#include <iostream>
using namespace std;

#include "darray.h"
using namespace oop344;



int main(){
  DArray<int> I(5);
  DArray<double> D(5);
  int i;
  for(i=0;i<5;i++){
    I[i] = i+10;
    D[i] = i*1.5;
  }
  cout<<I<<endl;
  cout<<D<<endl;
  I[6] = 100;
  cout<<I<<endl;
  return 0;
}