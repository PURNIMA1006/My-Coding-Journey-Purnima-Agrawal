#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<" kis number ko check karna h"<<endl;
    cin>>n;
    bool isprime = true;

    for( int i = 2; i<n; i++){
        if(n%i == 0){

            isprime = false;
            break;
        }
    }
    if(isprime){
        cout<<n<<" "<<"prime h"<<endl;
    }else{
        cout<<n<<" "<<"prime nahi h"<<endl;
    }
}
    

    
