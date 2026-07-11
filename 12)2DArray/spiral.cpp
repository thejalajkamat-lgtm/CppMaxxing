#include <iostream>
using namespace std;
void spiral_matrix(int mat[][4], int n, int m){
    int srow=0, scol=0;
    int erow=0, ecol=0;
    //top
    for(int j=scol;j<=ecol;j++){
        cout << mat[srow][j]<< " ";
    }
    //right
    for(int i=srow+1;i<=erow;i++){
        cout << mat[i][ecol]<<" ";
    }
    //bottom
    //left
}
int main(){
    int matrix[4][4] = { { 1, 2, 3, 4},
                         { 5, 6, 7, 8},
                         { 9,10,11,12},
                         {13,14,15,16}};
    return 0;
}