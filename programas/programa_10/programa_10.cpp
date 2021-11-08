#include <iostream>

using namespace std;

int main()
{
	int x;
	float number;
	cout << "x = ";
	cin >> x;
	cout << "Number= ";
	cin >> number;

	cout << "x = " << x << endl;
	cout << "number = " << number << endl;

	cout << "Direccion de x = " << &x << endl;
	cout << "Direccion de numero = " << &number << endl;

	cout << "El espacio asignado a una variable int es: " << sizeof(int) << endl;
}
