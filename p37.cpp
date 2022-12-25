//     5
//    54
//   543
//  5432
// 54321


#include<iostream>
using namespace std;

int main(){

    
    for(int i=5;i>=1;i--){
        for(int k=1;k<=i-1;k++){
            cout<<" ";
        }

        for(int j=5;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}