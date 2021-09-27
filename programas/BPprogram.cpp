#include <iostream>

using namespace std;

int main()
{
  int total = 0, thisBP, contador = 1;
  int mi_promedio;
  cout << "Introduce un valor de presion arterial (-1 para salir del programa): ";
  cin >> thisBP;
  while (thisBP != -1)
  {
    contador = contador + 1;
    total = total + thisBP;
    cout << "Introduce un valor de presion arterial (-1 para salir del programa): ";
    cin >> thisBP;
  }
  if (contador - 1 != 0)
  {
    mi_promedio = total / (contador - 1);
    cout << "El valor total es: " << total << endl;
    cout << "El valor promedio es: " << mi_promedio << endl;
    return 0;
  }
  else
  {
    cout << "El valor total es: " << 0 << endl;
    cout << "El valor promedio es: " << 0 << endl;
    return 0;
  }
}