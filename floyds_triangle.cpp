#include <iostream>
using namespace std;

int main(){

    int n, count=0;
    cout<<"Enter the number of row:\t";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            count+=1;
            cout<<count<<" ";
        }
        cout<<endl;
    }
}