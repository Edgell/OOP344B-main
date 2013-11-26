#include <iostream>
using namespace std;
void prnBits(unsigned int val){
  for(unsigned int i = sizeof(int)*8; i--;cout<<!!(val & 1 << (i)));
}
const char* bits(unsigned int val){
  static char str[512];
  int j = 0;
  for(unsigned int i = sizeof(int)*8; i--
          ;str[j++] = !!(val & 1 << i)+'0');
  str[j] = 0;
  return str;
}
int main(){
  int A = 0xF0;
  cout<<bits(A)<<endl;
  A = A | (1<<3);  // setting the 4th [mask:(1<<4-1)] bit to one
  cout<<bits(A)<<endl;
  A = A & ~(1<<6); // setting the 7th [mask: ~(1<<7-1)} bit to zero
  cout<<bits(A)<<endl;
  return 0;
}