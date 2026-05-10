#include<iostream>
using namespace std;

int main(){
    cout<<" kya piyenge aap chai ya coffee"<<endl;
    string choice;
    cin>>choice;

    if(choice == "coffee"){

     cout<<" latte or black "<<endl;
     cin>>choice;
     if(choice == "latte"){
        cout<<" latte coffee ban rahi h 5 min wait kariye"<<endl;

     }
     else{

        cout<<" black coffee ban rahi h 2 min wait kariye"<<endl;
     }

    } else if( choice == "chai"){

        cout<<" masala or normal"<<endl;
        cin>>choice;
        if(choice == "masala"){

            cout<<" masala chai ban rahi h 10 min wait kariye"<<endl;
        }else{ 
            cout<<" normal chai ban rahi h 5 min wait kariye"<<endl;
        }
    }

}
