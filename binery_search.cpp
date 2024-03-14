#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=mid){
        if(arr[mid]==key){
        return mid;
    }
    //going to the right part
    if(key>arr[mid]){
        start=mid+1;

    } 
    //Left part
    else{
        end=mid-1;
    }
    mid=(start+end)/2;
}
    return -1;
}

int main(){
    int even[6]={5,9,7,0,2,1};
    int odd[4]={7,8,5,9};
    int indexEven= binarySearch(even,6,2);
    cout<<"The index of even array is"<<indexEven<<endl;
    int indexOdd= binarySearch(odd,4,2);
    cout<<"The index of ODD array is"<<indexOdd<<endl;
    return 0;
}