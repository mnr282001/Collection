#include "selection.h"
#include <stdexcept>

int select(size_t k, const int* list, size_t N) {
  //throw exceptions for if the arguments are invalid
    // try{
    //
    //
    //   if ((k > N) || (k <= 0) || (N <= 0)) {
    //     throw std::invalid_argument("k is out of bounds");
    //   }
    // }
    if ((k > N) || (k <= 0) || (N <= 0)) {
      throw std::invalid_argument("k is out of bounds");
      // return -1;
    }



    // catch (std::invalid_argument& excpt) {
    //     std::cout << excpt.what() << std::endl;
    //     // throw std::invalid_argument("k is out of bounds");
    //   //  return excpt.what();
    //   return -1;
    // }

    // if ((k > N) || (k <= 0) || (N <= 0)) {
    //   throw std::invalid_argument("k is out of bounds");
    // }

  int* edited_list = new int[N];
  int* sorted_list = new int[N];
  for (size_t i = 0; i < N; ++i) {
    edited_list[i] = list[i];
  }
  // for (size_t i = 0; i < N; ++i) {
  //   std::cout << edited_list[i] << ", ";
  // }
  size_t littleN = N;
  int int32min = -2147483646;
  for (size_t j = 0; j < N; ++j) {
    int max = edited_list[0];
    size_t maxIndex = 0;
    for (size_t i = 0; i < littleN; ++i) {
      if (max < edited_list[i]) {
        max = edited_list[i];
        maxIndex = i;
      }
    }
    sorted_list[j] = max;
    for (size_t i = maxIndex; i < N-1; ++i) {
      edited_list[i] = edited_list[i+1];
    }
    edited_list[N-1] = int32min;
    --littleN;
  }
  delete [] edited_list;

  // for (size_t i = 0; i < N; ++i) {
  //   std::cout << sorted_list[i] << std::endl;
  // }

  int output = sorted_list[k-1];

  delete [] sorted_list;

  return output;
  // //int Nmaker = (int) N;
  // int edited_list[5000];
  // int sorted_list[5000];
  // size_t littleN = N;
  // int int32min = -2147483646;
  // for (size_t i = 0; i < N; ++i) {
  //   edited_list[i] = list[i];
  // }
  // for (size_t j = 0; j < N; ++j) {
  //   int max = edited_list[0];
  //   size_t maxIndex = 0;
  //   for (size_t i = 0; i < littleN; ++i) {
  //     if (max < edited_list[i]) {
  //       max = edited_list[i];
  //       maxIndex = i;
  //     }
  //   }
  //   sorted_list[j] = max;
  //   for (size_t i = maxIndex; i < N; ++i) {
  //     edited_list[i] = edited_list[i+1];
  //   }
  //   edited_list[N] = int32min;
  //   --littleN;
  // }
  //

  // return sorted_list[k-1];

}
