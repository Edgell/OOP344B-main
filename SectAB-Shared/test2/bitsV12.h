#include <iostream>
#ifndef __BITS_H__        // 1 mark{
#define __BITS_H__

namespace oop344{        // }
  class Bits{            // 1 mark{
    unsigned int _val;
    char* _bits;         //  }
  public:
    Bits(unsigned int bits = 0u);  // 5 marks{
    operator unsigned int()const;
    operator const char*();
    void setBits(int from, int to, bool value);
    virtual ~Bits();               // }
  };
  std::ostream& operator<<(std::ostream& os, Bits& B);   // 1 mark;
}


#endif
