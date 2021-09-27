#include <iostream>

using namespace std;

int main()
{
  int salida = 0;
  while (salida == 0)
  {
    int total = 0, thisBP, contador = 0;
    int mi_promedio;
    cout << "Introduce un valor de presion arterial (-1 para salir del programa): ";
    cin >> thisBP;
    while (thisBP != -1)
    {
      total = total + thisBP;
      cout << "Introduce un valor de presion arterial (-1 para salir del programa): ";
      contador = contador + 1;
      cin >> thisBP;
    }
    if (contador != 0)
    {
      mi_promedio = total / contador;
      cout << "El valor total es: " << total << endl;
      cout << "El valor promedio es: " << mi_promedio << endl;
    }
    else
    {
      cout << "No introdujo datos, por lo tanto el promedio no se puede calcular" << endl;
    }
    cout << "------------------------\n";
    cout << "Desea volver a calcular un promedio (si = 0; no = 1): ";
    cin >> salida;
  }
  cout << "Bye :D" << endl;
  return 0;
}