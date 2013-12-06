#include <iostream>
using namespace std;

#include "bitsV34.h"
using namespace oop344;

int main(){
  unsigned int a = 0xf0f0f0f0;
  Bits B(a);
  unsigned int i;
  cout<<(unsigned int)B<<": "<<B<<endl;
  for(i=8;i<=11;i++){
    B[i] = true;
  }
  cout<<(unsigned int)B<<": "<<B<<endl;
  for(i=4;i<=7; i++){
    B[i] = false;
  }
  cout<<(unsigned int)B<<": "<<B<<endl;
  return 0;
}