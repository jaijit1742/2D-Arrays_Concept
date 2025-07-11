#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cin >> rows >> cols;
    int arr[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
    int max_sum = 0;
    int max_row_index = 0;
    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++){
            sum += arr[i][j];
        }
        if(sum > max_sum){
            max_sum = sum;
            max_row_index = i;
        }
    }
    cout << "Maximum row sum is " << max_sum << " in row " << max_row_index << endl;
    return 0;
}