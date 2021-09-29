#include <iostream>

using namespace std;
int cube(int);
int sqr(int);
int main()
{
  int numero;
  cout << "Ponga un numero: ";
  cin >> numero;
  cout << "El numero al cubo es: " << cube(numero) << endl;
  cout << "El numero al cuadrado es: " << sqr(numero) << endl;
}

int cube(int n)
{
  return n * n * n;
}

int sqr(int n)
{
  return n * n;
}