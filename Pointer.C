#include <stdio.h>
#include "pointer.h"

//
int main(int argc, char const *argv[]) {
  int value = 8;
  int* pointer = &value;
  PrintIntegers(value, pointer);
  ChangeIntegers(value, pointer);
  PrintIntegers(value, pointer);
  return 0;
}
void PrintIntegers(int value, int *pointer)
{
  printf("Got an integer value %d and an address to an integer with value %i\n",value, *pointer);
}
void ChangeIntegers(int value, int *pointer)
{
  value = 18;
  *pointer = value;
}
