#include<iostream>
#include<cmath>
using namespace std;

int main(){

    cout<<"Enter any number to check prime or not:\t";
    int n, flag=0;
    cin>>n;
    for(int i=2; i<= sqrt(n); i++){

        if(n%i==0){
            cout<<"The number is not prime"<<endl;
            flag=1;
            break;
        }
    }

    if (flag==0){
        cout<<"The number is prime"<<endl;
    }
}