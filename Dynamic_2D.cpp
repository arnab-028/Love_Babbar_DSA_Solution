#include<iostream>
using namespace std;
int main(){
    int col;
    cin>>col;
    int row;
    cin>>row;
    //creating a 2D array
    int **arr= new int*[row];
    for(int i=0; i<row; i++){
        arr[i]=new int[col];
    }
    //taking input of 2D array
    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            cin>>arr[i][j];
        }
    }
    //output
    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}