#include<iostream>
using namespace std;

int main(){

    int age;
    string choice;
    cout<<" kis din show book karna h"<<endl;
    cin>>choice;

    if( choice == "sunday" || choice == "saturday"){

        cout<<" standard price for all INR 800"<<endl;
    } else {

        cout<<" apni age enter kariye"<<endl;
        cin>>age;
        if(age>59 || age < 13){

            cout<<" speacial discount INR 500 "<<endl;
        } else{

            cout<<" standard price INR 600 "<<endl;
        }
    }
}