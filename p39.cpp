//     5
//    44
//   333
//  2222
// 11111

#include<iostream>
using namespace std;

int main(){

    int value=5;
    for(int i=1;i<=5;i++){
        for(int k=5-i;k>=1;k--){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<value;
        }
        value--;
        cout<<endl;
    }

    return 0;
}