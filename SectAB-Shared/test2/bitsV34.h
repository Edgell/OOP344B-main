//Version 3/4
#include <iostream>     // 1 mark{
#ifndef __BITS_H__        
#define __BITS_H__

namespace oop344{        // }
  class Bits{            // .5 mark{
    bool* _bits;        //  }
    void int2bool(unsigned int val); // 1 mark{
    unsigned int  bool2int();        //}
  public:
    Bits(unsigned int bits = 0u);  // 2.5 marks{
    operator unsigned int();
    std::ostream& print(std::ostream& os)const;
    bool& Bits::operator[](unsigned int index);
    virtual ~Bits();               // }
  };
  std::ostream& operator<<(std::ostream& os, const Bits& B);   // 1 mark;
}


#endif
