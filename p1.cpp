#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=4;i++){
        for(int k=4-i;k>=1;k--){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            if(j!=i){
                cout<<char(j+96)<<"*";
            }else{
                cout<<char(j+96);
            }
        }

        cout<<endl;
    }

    return 0;
}