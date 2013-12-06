#ifndef __DARRAY_H__                         // 1 mark {
#define __DARRAY_H__

namespace oop344{                            // }
  template <typename type>                 // 1 mark
  class DArray{                           // 1 mark {
    type* _data;
    unsigned int _size;                  // }
    void size(unsigned int newsize){           // 5 marks { // logic could be within operator[]
        type* temp = new type[newsize];
        for(int i=0;i<_size && i<newsize;i++){
          temp[i] = _data[i];
        }
        delete[] _data;
        _data = temp;
        _size = newsize;
    }                                        // }
  public:
    DArray(unsigned int size){
      _data = new type[_size = size];
    }
    type& operator[](unsigned int index){   // 3 marks {
      if(index >= _size){
        size(index+5);
      }
      return _data[index];
    }                                       // }
    unsigned int size()const{               // 1 mark{
      return _size;
    }                                      //}
    virtual ~DArray(){                   // 1 mark{
      delete[] _data;
    }                                   //}
  };
  template <typename type>                              // 3 marks{
  ostream& operator<<(ostream& os, DArray<type>& D){
    for(int i=0;i<D.size();i++){
      os<<D[i]<<" ";
    }
    return os;
  }
}                                    //}
#endif