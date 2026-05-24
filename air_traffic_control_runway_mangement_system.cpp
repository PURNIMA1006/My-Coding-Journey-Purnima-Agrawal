#include<iostream>
using namespace std;

int main(){

    char choice;
    cout<<"Which type of landing is it \nA. normal[n] \nB. Emergency[e]"<<endl;
    cin>>choice;

    if(choice == 'e'){

        cout<<"which type of Emergency"<<endl;
        cout<<"medical A. emergency[m] \nB. shortage of fuel[f] \nC. technical fault[t]"<<endl;

        char choice;
        cin>>choice;

        if(choice == 'm'){

            cout<<"assigning you Runway closest to ambulance"<<endl;
            cout<<" you can start landing process"<<endl;

        }else if(choice == 't'){

             cout<<"assigning you Runway closest to techanical team/garage"<<endl;
             cout<<" you can start landing process"<<endl;

        }else if(choice == 'f'){

           cout<<"how much fuel is left"<<endl;
           int fuel_left;
           cin>>fuel_left;

           if(fuel_left > 100 || fuel_left < 0){

            cout<<" please enter valid count!"<<endl;

        }else if(fuel_left < 40){

            cout<<"land Immediately!!"<<endl;

           }else if(fuel_left >= 40 && fuel_left < 80){

            cout<<"wait we are assigning you a runway"<<endl;
           }

        }

    } else if(choice == 'n'){

        cout<<"wait we are assigning you a runway"<<endl;

    }else{

        cout<<"enter valid options "<<endl;
    }

}
