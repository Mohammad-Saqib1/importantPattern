#include<iostream>
using namespace std;

int fact(int n){

    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }

    return f;
}


int coff(int n,int r){

    int ans=fact(n)/(fact(n-r)*fact(r));
    return ans;
}

int main(){

    int n=6;
    for(int i=0;i<n;i++){
        for(int k=n-i;k>=1;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<coff(i,j)<<" ";
        }

        cout<<endl;
    }

    return 0;
}