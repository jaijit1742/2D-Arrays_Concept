#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    cin >> rows >> cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> arr[i][j];
        }
    }
    cout << "Original matrix:"
        for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }   
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }   
    return 0;
}