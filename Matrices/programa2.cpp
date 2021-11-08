#include <iostream>
#define N 5

void leerMatriz(int[N][N], int);
void crearMatriz(int[N][N], int);
void crearRTD180(int[N][N], int[N][N], int);
void crearRTD270(int[N][N], int[N][N], int[N][N], int);
void crearRTD90(int[N][N], int[N][N], int[N][N], int);

using namespace std;

int main()
{
  int n;
  cout << "Ingrese el tamaño de la matriz NxN: ";
  cin >> n;
  int matriz[N][N];
  int tras1[N][N];
  int tras2[N][N];
  int rotada90[N][N];
  int rotada180[N][N];
  int rotada270[N][N];
  crearMatriz(matriz, n);
  cout << "-------- Matriz normal ---------" << endl;
  leerMatriz(matriz, n);

  cout << "-------- Matriz rotada 90 grados ---------" << endl;
  crearRTD90(matriz, tras1, rotada90, n);

  cout << "-------- Matriz rotada 180 grados ---------" << endl;
  crearRTD180(matriz, rotada180, n);

  cout << "-------- Matriz rotada 270 grados ---------" << endl;
  crearRTD270(matriz, rotada270, tras2, n);
}

void crearRTD90(int matrix[N][N], int rotated[N][N], int trasnpone[N][N], int length)
{

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      trasnpone[j][i] = matrix[i][j];
    }
    cout << endl;
  }

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      rotated[i][j] = trasnpone[i][length - j - 1];
    }
    cout << endl;
  }

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      cout << "| " << rotated[i][j] << " ";
    }
    cout << " |" << endl;
  }
}

void crearRTD180(int matrix[N][N], int rotated[N][N], int length)
{
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      rotated[i][j] = matrix[length - i - 1][length - j - 1];
    }
    cout << endl;
  }

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      cout << "| " << rotated[i][j] << " ";
    }
    cout << " |" << endl;
  }
}

void crearRTD270(int matrix[N][N], int rotated[N][N], int trasnpone[N][N], int length)
{
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      rotated[i][j] = matrix[i][length - j - 1];
    }
    cout << endl;
  }

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      trasnpone[j][i] = rotated[i][j];
    }
    cout << endl;
  }

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      cout << "| " << trasnpone[i][j] << " ";
    }
    cout << " |" << endl;
  }
}

void leerMatriz(int matrix[N][N], int length)
{
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      cout << "| " << matrix[i][j] << " ";
    }
    cout << "|" << endl;
  }
}

void crearMatriz(int matrix[N][N], int length)
{
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      cout << "A[" << i << "," << j << "] = ";
      cin >> matrix[i][j];
    }
  }
}