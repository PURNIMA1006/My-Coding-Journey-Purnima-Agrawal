#include<iostream>
using namespace std;

int main(){

    int a = 0;
    int b =1;
    int n;
    int i;
    int next_num;
    cout<<" value of n is ?"<<endl;

    cin>>n;

     cout<<a<<" "<<b<<" ";

    for( i = 1; i<= n-2; i++){
    
        next_num = a+b;
        cout<<next_num<<" ";
        
        a = b;
        b = next_num;

    }
}