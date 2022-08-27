#include <iostream>
#include<math.h>
using namespace std;

int armstrong(int n){

    int original=n,i, sum=0;

    while(n>0){
        i=n%10;
        sum+= pow(i,3);
        n=n/10;
    }

    sum==original ? cout<<"Armstrong number" : cout<<"Not Armstrong number";

return 0;
}

int main()
{
    int n;
    cout<<"Enter any number:\t";
    cin>>n;
    armstrong(n);
    return 0;
}