#include <cstdlib>
#include <iostream>

using namespace std;

//Suma de matrices recursiva por cola.
void matrixSum(int A[][3], int B[][3], int dimRow, int dimCol, int C[][3], int i = 0, int j = 0){

    //Verificación de filas.
    if(i < dimRow){
        //Suma del valor.
        C[i][j] = A[i][j]+B[i][j];
        //Print del valor.
        cout << C[i][j];
        //Verificación de columnas y llamada recursiva.
        if(j == dimCol-1){
            cout << "\n";
            matrixSum(A, B, dimRow, dimCol, C, i+1, 0);
        }else{
            cout << " ";
            matrixSum(A, B, dimRow, dimCol, C, i, j+1);
        }
    }
    
}

int main(){

    //Matrices a trabajar.
    int m1[][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int m2[][3] = {{3, 2, 1}, {3, 2, 1}, {3, 2, 1}};

    //Matriz en la cual se almacena el resultado.
    int m3[][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    //Ejecución de la suma y print de prueba.
    matrixSum(m1, m2, sizeof(m1)/sizeof(*m1), sizeof(m1[0])/sizeof(*(m1[0])), m3);
    cout << "Test: " << m3[2][2];

    return 0;
}