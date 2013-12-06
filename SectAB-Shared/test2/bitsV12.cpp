#include "bits.h"   // 1 mark {
namespace oop344{   // }
  Bits::Bits(unsigned int val){      // 2 marks{
    _val = val;
    _bits = new char[sizeof(int)*8+1];
  }
  Bits::operator unsigned int()const{
    return _val;
  }                                 // }
  Bits::operator const char*(){     // 6 marks{
    unsigned int m = 1;
    _bits[sizeof(int)*8] =0;
    for(int i=sizeof(int)*8-1;i>=0;i--){
      _bits[i] = '0' + (int)((_val & m) != 0);
      m = m<<1;
    }
    return _bits;
  }                                // }
  void Bits::setBits(int from, int to, bool bit){ // 6 marks {
    unsigned int m = 1 << (from -1);
    for(int i=0;i<=to-from;i++){
      _val = bit?_val|m:_val&~m;
      m = m <<1;
    }
  }                              // }
  Bits::~Bits(){                // 1 mark{
    delete[] _bits;
  }                             //}
  std::ostream& operator<<(std::ostream& os, Bits& B){ // 1 mark{
    return os<<((const char*)B);
  }                                                    // }
}