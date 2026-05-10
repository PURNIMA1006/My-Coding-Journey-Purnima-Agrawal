#include<iostream>
using namespace std;

int main (){

    int n;
    cout<<" n ki value daalo! "<<endl;
    cin>>n;

    int a = 1;
    int b = 2;
    
    cout<<a<<" "<<b<<" ";
    for( int i = 1 ; i<=n ; i++){

        int Nextnumber = a + b;
        cout<<Nextnumber<<" ";

        a = b;
        b = Nextnumber;
    }
    

}