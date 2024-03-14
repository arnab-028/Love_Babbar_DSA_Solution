#include<iostream>
using namespace std;
int main(){
    int n=1330;
    int ans;
    cin>>ans;
    switch(ans){
        case 100: cout<<n/100<<endl;
                 break;
        case 10: cout<<n/10<<endl;
                break;
        case 50: cout<<n/50<<endl;
                break;
        case 20: cout<<n/20<<endl;
                break;
    }
}