// A A A A A
// B B B B
// C C C
// D D
// E

#include<iostream>
using namespace std;

int main(){

    int ans=65;
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<char(ans)<<" ";
        }
        ans++;
        cout<<endl;
    }
    return 0;
}