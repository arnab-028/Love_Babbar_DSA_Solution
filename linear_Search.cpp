 #include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for (int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
   
   return 0;
}

int main(){
    int arr[5]={4,8,9,6,3};
    cout<<"Enter the element to be found"<<endl;
    int key;
    cin>>key;
    bool found =search(arr,9,key);
    if(found){
        cout<<"present"<<endl;

    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}