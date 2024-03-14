#include<iostream>
using namespace std;
int getSum(int *arr, int size){
    //Ghonta case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int rem= getSum(arr+1, size-1);
    return arr[0]+rem;
}
int main(){

    int arr[5],n;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>arr[i];
        
    }
    int sum= getSum(arr, n);
    cout<<"sum= "<<sum<<endl;
    return 0;
    
}