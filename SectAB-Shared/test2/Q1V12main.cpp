#include <iostream>
using namespace std;

#include "bits.h"
using namespace oop344;

int main(){
  unsigned int a = 0xf0f0f0f0;
  Bits B(a);
  cout<<(unsigned int)B<<": "<<B<<endl;
  B.setBits(9,12, true);
  cout<<(unsigned int)B<<": "<<B<<endl;
  B.setBits(5,8, false);
  cout<<(unsigned int)B<<": "<<B<<endl;
  return 0;
}