#include<iostream>
using namespace std;

int main(){

    int address_list[4] = {101 , 102 , 103 , 104};
    int choice; 
    cout<<"enter address code \n **lie between 0 to 3**"<<endl;
    cin>>choice;


    if(choice == 0){

        cout<<"Owner  name - X \nfloor = G \nhouse number = 1 \nfull address = X 1G \nunique code"<<address_list[0]<<endl;
        return 0;

    }else if(choice == 1){

        cout<<"Owner  name - Y \nfloor = G \nhouse number = 2 \nfull address = Y 2G \nunique code"<<address_list[1]<<endl;
        return 0;

    }else if(choice == 2){

        cout<<"Owner  name - Z \nfloor = G \nhouse number = 3 \nfull address = Z 3G \nunique code"<<address_list[2]<<endl;
        return 0;
        
    }else if(choice == 3){

        cout<<"Owner  name - H \nfloor = G \nhouse number = 4 \nfull address = H 4G \nunique code"<<address_list[3]<<endl;
        return 0;
        
    }else{
        
        cout<<"invalid input"<<endl;
        
   }
}
