#include<iostream>
using namespace std;

int main(){

    int value=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<char(value+96)<<" ";
            value++;
        }

        cout<<endl;
    }

    return 0;
}