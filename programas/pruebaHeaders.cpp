#include <iostream>
#include "Headers/message.h"

using namespace std;

int main()
{
  displayMessage(12);
  cout << "Bye :D" << endl;
  return 0;
}

void displayMessage(int n)
{
  cout << "Me gusta el curso de programación " << n << " anios" << endl;
}