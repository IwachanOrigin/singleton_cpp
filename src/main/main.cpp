
#include <iostream>
#include "singleton.h"

int main(int argc, char* argv[])
{
  std::wcout << Singleton::getInstance().getData() << std::endl;
}

