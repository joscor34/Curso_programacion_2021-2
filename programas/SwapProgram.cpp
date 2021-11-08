#include <iostream>

using namespace std;

void swapfunction(int &, int &);
int residuo(int, int);

int main()
{
  int valor1, valor2;
  cout << "Porfavor ingrese un valor x: ";
  cin >> valor1;
  cout << "Porfavor ingrese un valor y: ";
  cin >> valor2;
  cout << "x/y = " << 1.0 * valor1 / valor2 << endl;

  cout << "El residuo es: " << residuo(valor1, valor2) << endl;

  swapfunction(valor1, valor2);

  cout << "Ahora x vale: " << valor1 << endl;
  cout << "Ahora y vale: " << valor2 << endl;
  cout << "x/y = " << 1.0 * valor1 / valor2 << endl;
  cout << "El residuo es: " << residuo(valor1, valor2) << endl;

  return 0;
}

void swapfunction(int &x, int &j)
{
  int supp = x;
  x = j;
  j = supp;
}

int residuo(int i, int j)
{
  return i % j;
}