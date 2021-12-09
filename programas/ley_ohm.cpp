#include <iostream>

using namespace std;

int corriente, voltaje, resistencia;

int decision = 0;

int main()
{
  cout << "╔╗╔═╦╦╗╔═╦═╗╔═╦╦╦══╗ " << endl;
  cout << "║╚╣╦╬╗║║╠║╦╣║║║═║║║║ " << endl;
  cout << "╚═╩═╝╚╝╚═╩═╝╚═╩╩╩╩╩╝ " << endl;

  cout << "\n\n\n Opciones: " << endl;
  cout << "1) Calcular Voltaje" << endl;
  cout << "2) Calcular Corriente" << endl;
  cout << "3) Calcular Resistencia" << endl;

  cout << "\nElije una de las opciones: " << endl;
  cin >> decision;

  switch (decision)
  {
  case 1:
    cout << "Indique el valor de la resistencia: ";
    cin >> resistencia;
    cout << "Indique el valor de la corriente: ";
    cin >> corriente;

    cout << "El voltaje es: " << resistencia * corriente << endl;
    break;
  case 2:
    cout << "Indique el valor de la resistencia: ";
    cin >> resistencia;
    cout << "Indique el valor de el voltaje: ";
    cin >> voltaje;

    cout << "La corriente es: " << voltaje / resistencia << endl;
    break;
  case 3:
    cout << "Indique el valor de la corriente: ";
    cin >> corriente;
    cout << "Indique el valor de el voltaje: ";
    cin >> voltaje;

    cout << "La corriente es: " << voltaje / corriente << endl;
    break;
  default:
    break;
  }
}