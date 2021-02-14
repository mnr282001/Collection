#include "selection.h"

int main() {
  const int A[7] = {8,6,7,5,3,0,9};
  int B = select(2,A,7);
  std::cout << B << std::endl;
  // int J = select(8,A,7);
  // std::cout << J << std::endl;

  int C = select(4,A,7);
  std::cout << C << std::endl;
  int D = select(3,A,7);
  std::cout << D << std::endl;
  int E = select(5,A,7);
  std::cout << E << std::endl;
  int F = select(6,A,7);
  std::cout << F << std::endl;
  int G = select(7,A,7);
  std::cout << G << std::endl;
  int H = select(1,A,7);
  std::cout << H << std::endl;
  // int I = select(0,A,7);
  // std::cout << I << std::endl;
  // int J = select(8,A,7);
  // std::cout << J << std::endl;
  // const int X[1] = {1};
  // int Y = select(0,X,0);
  // std::cout << Y << std::endl;
  return 0;
}
