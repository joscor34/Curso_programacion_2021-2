#include <iostream>
#include "functions.cpp"
#define N 4

using namespace std;

int main()
{
  int n;
  cout << "Ingrese el tamaño de la matriz NxN: ";
  cin >> n;
  int matriz[N][N];
  int transpuesta[N][N];
  int rotadaV[N][N];
  int rotadaH[N][N];

  crearMatriz(matriz, n);

  cout << "----- Normal -----" << endl;
  leerMatriz(matriz, n);

  cout << "----- Traspuesta -----" << endl;
  crearTraspuesta(matriz, transpuesta, n);

  cout << "----- Rotada Vertical -----" << endl;
  crearRTvertical(matriz, rotadaV, n);

  cout << "----- Rotada Horizontal -----" << endl;
  crearRTHorizontal(matriz, rotadaV, n);

  cout << "----- Rotada Diagonal -----" << endl;
  crearRTDiagonal(matriz, rotadaV, n);
}
