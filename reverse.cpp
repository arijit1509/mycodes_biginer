#include <iostream>
using namespace std;
int main()
{
    int n, reverse, i;
    cout<<"Enter any number:\t";
    cin>>n;

    while(n>0){
       i=n%10;
       reverse= reverse*10+i;
       n=n/10;
    }

    cout<<reverse;
    return 0;
}