#include <iostream>

using namespace std;

int main()
{
  int arreglo[5];
  int numeroMenor = 10000000;

  arreglo[0] = 40;
  arreglo[1] = 32;
  arreglo[2] = 90;
  arreglo[3] = 12;
  arreglo[4] = 16;

  for (int i = 0; i < 5; i++)
  {
    if (arreglo[i] < numeroMenor)
    {
      numeroMenor = arreglo[i];
    }
  }
  cout << "El mayor valor de tu arreglo es: " << numeroMenor << endl;
  return 0;
}