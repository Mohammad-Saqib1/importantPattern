#include<iostream>
using namespace std;
int main(){

    for(int i=1;i<=5;i++){
        for(int j=1;j<=9;j++){
            if(i==5){
                cout<<"*";
            }else if(j==5 && i==1){
                cout<<"*";
            }else if((i==4 && j==2)||(i==4 && j==8)){
                cout<<"*";
            }else if((i==3 && j==3)||(i==3 && j==7)){
                cout<<"*";
            }else if((i==2 && j==4)||(i==2 && j==6)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}