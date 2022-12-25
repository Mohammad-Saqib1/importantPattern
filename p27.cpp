#include<iostream>
using namespace std;
int main(){

    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(j==1){
                cout<<"*";
            }else if(j==9){
                cout<<"*";
            }else if(j==i){
                cout<<"*";
            }else if(j==9-i+1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}