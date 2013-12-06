#include "bitsV34.h"   // 1 mark {
namespace oop344{   // }
  unsigned int Bits::bool2int(){            // 4 marks V3{
    unsigned val = 0;
    unsigned int m = 1;
    for(int i = 0;i<sizeof(int)*8;i++){
      if(_bits[i]){
        val = val | m;
      }
      m = m << 1;
    }
    return val;
  }                                          // }
  void Bits::int2bool(unsigned int val){     // 4 marks V4{
    unsigned int m = 1;
    for(int i = 0;i<sizeof(int)*8;i++){
      _bits[i] = bool(val & m);
      m = m << 1;
    }
  }                                         // }

  Bits::Bits(unsigned int val){      // 2 marks{
    _bits = new bool[sizeof(int)*8];
    int2bool(val);
  }
  Bits::operator unsigned int(){     // 2 marks{
    return bool2int();
  }                                 // }
  std::ostream& Bits::print(std::ostream& os)const{     // 2 marks{
    for(int i=0;i<sizeof(int)*8;i++){
      os<<int(_bits[31-i]);
    }
    return os;                                       
  }                                // }
  bool& Bits::operator[](unsigned int index){ // 2 marks{
    return _bits[index%(sizeof(int)*8)];
  }                              //             }
  Bits::~Bits(){                // 1 mark{
    delete[] _bits;
  }                             //}
  std::ostream& operator<<(std::ostream& os, const Bits& B){ // 1 mark{
    return B.print(os);
  }                                                    // }
}