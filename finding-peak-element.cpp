#include<iostream>
using namespace std;

int main(){

    int arr[5] = {5 , 6 , 7 , 2 , 1};
    
    int size = 5;
    int start = 1 , end = size - 2 ;

    while(start <= end){

        int mid = start + (end - start)/2;

        if(arr[mid] > arr[mid -1] && arr[mid] > arr[mid + 1]){

            cout<<"peak element is at"<<" "<<mid<<endl;
            cout<<"peak element is "<<arr[mid]<<endl;
            return 0;
            
        }else if(arr[mid] < arr[mid+1]){

            start = mid + 1;

        }else{

            end = mid - 1;

        }

    }

}