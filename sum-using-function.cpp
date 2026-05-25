#include<iostream>
using namespace std;

float sum(int n){
    float result =0;

    if(n>0){

        result = ((n)*(n+1))/2;

    }else{
        cout<<"enter valid value of n"<<endl;
    }
    return result;
}

int main(){

    int n;
    cin>>n;
    cout<<"sum is" <<" "<<sum(n)<<endl;
}