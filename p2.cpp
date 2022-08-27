#include<iostream>
using namespace std;

int main(){

    int r,c;
    cout<<"Enter the num of rowa and col:\t";
    cin>>r>>c;

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i==1 || i==r){
                cout<<"*";
            }
            else if(j==1 || j==c){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}