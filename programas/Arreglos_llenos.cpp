#include <iostream>
#include <string>

using namespace std;

int main()
{
  string N[100];
  string T[100];
  string NAME, NUMBER;
  int n, j = 0, decision = 0;
  bool found = false;
  n = 4;
  N[0] = "Arturo";
  T[0] = "1234";
  N[1] = "Jose";
  T[1] = "4567";
  N[2] = "Caro";
  T[2] = "7890";
  N[3] = "Ricardo";
  T[3] = "0987";

  // cout << "Numero de contatos: ";
  // cin >> n;

  // for (int i = 0; i < n; i++)
  // {
  //   cout << "Contacto #" << i << endl;
  //   cout << "Nombre: ";
  //   cin >> N[i];
  //   cout << "Numero: ";
  //   cin >> T[i];
  // }

  cout << "Mostrando los datos de la lista" << endl;
  cout << "---------------------" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Contacto #" << i << endl;
    cout << "Nombre: " << N[i] << endl;
    cout << "Numero: " << T[i] << endl;
    cout << "---------------------" << endl;
  }
  cout << "Desea buscar por numero o por nombre del contacto(1 = numero, 0 = nombre): ";
  cin >> decision;
  if (decision == 0)
  {
    cout << "Indica el nombre que desea buscar: ";
    cin >> NAME;
    cout << "Buscando a: " << NAME << endl;
    while (j < n)
    {
      if (NAME == N[j])
      {
        cout << "El telefono del contacto es: " << T[j] << endl;
        found = true;
      }
      j++;
    }
    if (found == false)
    {
      cout << "No se encontró el nombre en los contactos" << endl;
    }
  }
  else if (decision == 1)
  {
    cout << "Indica el numero que desea buscar: ";
    cin >> NUMBER;
    cout << "Buscando a: " << NUMBER << endl;
    while (j < n)
    {
      if (NUMBER == T[j])
      {
        cout << "El nombre del contacto es: " << N[j] << endl;
        found = true;
      }
      j++;
    }
    if (found == false)
    {
      cout << "No se encontró el telefono en los contactos" << endl;
    }
  }

  return 0;
}