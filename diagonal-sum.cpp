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

    int diag_sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==j){
                diag_sum+=arr[i][j];
            }
        }
    }   
    cout << "Sum of diagonal elements: " << diag_sum;
    return 0;
}