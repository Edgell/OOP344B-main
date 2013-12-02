#include <string>
#include <iostream>
using namespace std;
int main(){
  string str="Hello ";
  str += ", how are you  ";
  str[20] = '!';
  cout<<str<<endl;
  return 0;
}

