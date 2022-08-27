#include<iostream>
using namespace std;

int main(){

    int r,c;
    cout<<"Enter the num of rowa and col:\t";
    cin>>r>>c;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}