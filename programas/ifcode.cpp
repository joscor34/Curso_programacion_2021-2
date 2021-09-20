#include <iostream>
// Se inicializa un entorno virtual
using namespace std;

// Se declaran dos variables enteras y flotantes globales
int carDoors, driveAge;
float premium;

float monthlypayment(int doors, int age);

// Se crea la función principal
int main()
{
  // Se le piden los datos al usuario
  cout << "Porfavor introduzca su edad: ";
  cin >> driveAge;
  cout << "Porfavor introduzca el numero de puertas de su automovil: ";
  cin >> carDoors;
  cout << "------------\n";
  // Se imprime el valor que regresa la función
  cout << monthlypayment(carDoors, driveAge);
  cout << "------------" << endl;

  return 0;
}

// Se crea una funcion que hace las comparativas y regresa y pago mensual
float monthlypayment(int doors, int age)
{
  // Se compara el numero de puertas y la edad
  if (doors == 4 && age > 24)
  {
    // Si el numero de puertas es 4 y tiene mas de 24 años, se asignan los datos siguientes:
    premium = 650.00;
    cout << "LOW RISK\n";
  }
  else
  {
    // De lo contrario se asignan:
    premium = 1200.00;
    cout << "HIGH RISK\n";
  }

  // Se regresa el valor de "premium" entre 17.00
  cout << "Pago mensual de: ";
  return premium / 12.00 + 5.00;
}