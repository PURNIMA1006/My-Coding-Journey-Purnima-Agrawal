#include<iostream>
using namespace std;

int firstocc(int arr[] , int size , int key){

  int start = 0 , end = size - 1;
  int ans = -1;
  int mid = start + (end - start)/2;

  while(start<=end){

    if(arr[mid] == key){
    ans = mid;
     end = mid -  1;

    }
    else if(key> arr[mid]){

      start = mid + 1;
    }
    else{

      end = mid - 1;

    }
   
     mid = start + (end - start)/2;
   
  }
   return ans;
}

int lastocc(int arr[] , int size , int key){

  int start = 0 , end = size - 1;
  int ans = -1;
  int mid = start + (end - start)/2;

  while(start<=end){

    if(arr[mid] == key){
    ans = mid;
     start = mid +  1;

    }
    else if(key> arr[mid]){

      start = mid + 1;
    }
    else{

      end = mid - 1;

    }
   
     mid = start + (end - start)/2;
   
  }
   return ans;
}


int main(){

  int al[5] = {1 , 1 , 3 , 5 , 9};

  cout<<" 1st occurance of 1 is at index"<<" "<< firstocc(al , 5 , 1)<<endl;
  cout<<" last occurance of 1 is at index"<<" "<< lastocc(al , 5 , 1)<<endl;
}