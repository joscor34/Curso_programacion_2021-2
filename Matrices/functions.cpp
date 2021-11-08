#include <iostream>
#include "functions.h"

using namespace std;

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

void crearTraspuesta(int matrix[N][N], int transpose[N][N], int length)
{
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      transpose[j][i] = matrix[i][j];
    }
    cout << endl;
  }
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      cout << "| " << transpose[i][j] << " ";
    }
    cout << " |" << endl;
  }
}

void crearRTvertical(int matrix[N][N], int rotated[N][N], int length)
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
      cout << "| " << rotated[i][j] << " ";
    }
    cout << " |" << endl;
  }
}

void crearRTHorizontal(int matrix[N][N], int rotated[N][N], int length)
{
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      rotated[i][j] = matrix[length - i - 1][j];
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

void crearRTDiagonal(int matrix[N][N], int rotated[N][N], int length)
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