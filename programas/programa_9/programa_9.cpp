#include <iostream>
#include <cmath>

using namespace std;

void getRoot(float a, float b, float c)
{
  float temp, root1, root2;
  temp = b * b - 4 * a * c;
  root1 = (-b + sqrtf(temp)) / (2 * a);
  root2 = (-b - sqrtf(temp)) / (2 * a);
  cout << "La X1 es: " << root1 << endl;
  cout << "La X2 es: " << root2 << endl;
}

int main()
{
  float a, b, c;
  cout << "Dame el valor de a: " << endl;
  cin >> a;
  cout << "Dame el valor de b: " << endl;
  cin >> b;
  cout << "Dame el valor de c: " << endl;
  cin >> c;

  getRoot(a, b, c);

  return 0;
}