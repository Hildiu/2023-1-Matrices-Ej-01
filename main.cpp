#include <iostream>
#include <iomanip>
using namespace std;

void imprimir(int mat[][4], int filas, int col);
int elMenor(int m[][4], int filas, int col);

int main()
{
  int mat[3][4];

  //--- se leen datos a la matriz
  for(int f=0; f<3; f++) {
    for (int c = 0; c < 4; c++)
    { cout << "mat[" << f << "][" << c << "]= ";
      cin >> mat[f][c];
    }
  }

  imprimir(mat, 3, 4);
  cout<< "\n El mayor elemento de la matriz es : " << elMenor(mat, 3, 4) << "\n";

  return 0;
}


void imprimir(int mat[][4], int filas, int col)
{
 cout <<"\n";
 for(int f=0; f<filas; f++) {
   for (int c = 0; c < col; c++)
     cout << setw(4) << mat[f][c];
   cout << "\n";
 }
}


int elMenor(int m[][4], int filas, int col)
{ int menor=m[0][0];

  for(int f=0; f<filas; f++) {
    for (int c = 0; c < col; c++)
      if (m[f][c] < menor)
        menor = m[f][c];
  }
    return menor;
}