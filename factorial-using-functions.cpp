#include<iostream>
using namespace std;

int factorial(int n){

    int fact = 1;

        for(int i=1 ; i<=n ; i++){

            fact = fact*i;
    
}
return fact; 
}

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    if(n>=0){

        cout<<n<<" "<<"factorial is"<<" "<<factorial(n)<<endl;

    }else{

        cout<<"Enter valid input!!"<<endl;
    }

}