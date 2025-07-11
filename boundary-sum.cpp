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

    int bound_sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==0 || j==0 || i==rows-1 || j==cols-1){
                bound_sum+=arr[i][j];
            }
        }
    }   
    cout << "Sum of boundary elements:" << bound_sum;
    return 0;
}