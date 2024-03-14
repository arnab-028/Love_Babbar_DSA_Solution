#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int SIZE;
        cin>>SIZE;
        int X[SIZE];
        map<int,int>M;
        for(int i=0;i<SIZE;i++){
            cin>>X[i];
            M[X[i]]++;
        }
        int temp=1;
        for(auto it:M){
            if(it.second%2!=0){
                cout<<"YES"<<endl;
                temp=0;
                break;
            }
        }
        if(temp)
        cout<<"NO"<<endl;
    }
    return 0;
}