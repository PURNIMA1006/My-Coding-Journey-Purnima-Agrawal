#include<iostream>
using namespace std;

int coff(int n ){
int fact = 1;
for( int i= 1 ; i<=n ; i++){

     fact *= i;  
}
 return fact;
}   
int main(){

    int n , r;
    cout<<"enter the value of n and r"<<endl;
    cin>>n>>r;
    
    if(n >= 0 && r>=0 && n>=r){

        int ans = coff(n)/((coff(r))*(coff(n-r)));
        cout<<ans<<endl;

    }else{
        cout<<"invalid input"<<endl;
    }
    
}