#include<iostream>
using namespace std;

int main(){

    int i, j;

    for(i=0; i<5; i++){
        for(j=1; j<=5-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}