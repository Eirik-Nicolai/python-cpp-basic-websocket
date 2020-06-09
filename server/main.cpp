#include <iostream>
#include "main.h"

int main()
{
    std::cout << add(LARGE_NUMBER, 2) << std::endl;
}

int add(const int & a, const int & b)
{
  return a + b;
}
