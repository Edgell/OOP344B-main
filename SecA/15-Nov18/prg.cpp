#include <cstdio>
using namespace std;

int main(){
  char A = 0x3A;
  char B = 0x95;
  char C;
  printf("     A: %10X    %d\n", A, A); 
  printf("     B: %10X    %d\n", B, B); 
  C = A & B;
  printf(" A & B: %10X    %d\n", C, C); 
  C = A | B;
  printf(" A | B: %10X    %d\n", C, C); 
  C = A ^ B;
  printf(" A ^ B: %10X    %d\n", C, C);
  C = ~A;
  printf("   ~ A: %10X    %d\n", C, C);
  C = A << 1;
  printf("A << 1: %10X    %d\n", C, C); 
  C = B << 1;
  printf("B << 1: %10X    %d\n", C, C); 
  C = A >> 1;
  printf("A >> 1: %10X    %d\n", C, C); 
  C = B >> 1;
  printf("B >> 1: %10X    %d\n", C, C); 
  return 0;
}