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

    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
    }

    cout << "Sum of elements of the matrix is: "<< sum;
    return 0;

}