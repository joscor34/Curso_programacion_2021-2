#include <iostream>

using namespace std;

int creditsEarnet;

int main()
{
  cout << "Ingrese la cantidad creditos tiene el estudiante:";
  cin >> creditsEarnet;
  if (creditsEarnet >= 90)
    cout << "Su estatus es: SENIOR" << endl;
  else if (creditsEarnet >= 60)
    cout << "Su estatus es: JUNIOR" << endl;
  else if (creditsEarnet >= 30)
    cout << "Su estatus es: SOPHOMORE" << endl;
  else
    cout << "Su estatus es: FRESHMAN" << endl;

  return 0;
}