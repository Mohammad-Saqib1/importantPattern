#include<iostream>
using namespace std;

int main(){

    int value=1;
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<value<<" ";
        }
        value++;
        cout<<endl;
    }

    return 0;
}