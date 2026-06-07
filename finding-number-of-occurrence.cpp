#include<iostream>
using namespace std;

int firstocc(int arr[], int size , int key){

     int start = 0 , end = size-1 ;
      int ans = -1;

    while(start<=end){

        int mid = start + (end - start)/2;
        
        if(key == arr[mid]){

            ans = mid;
            end = mid - 1;

        }else if(key > arr[mid]){

            start = mid + 1;

        }else{

            end = mid - 1;

        }
         mid = start + (end - start)/2;
    }
    return ans;
}

int lastocc(int arr[], int size , int key){

    
        int start = 0 , end = size-1 ;
        int ans = -1;

    while(start<=end){

        
        int mid = start + (end - start)/2;
        
        if(key == arr[mid]){

            ans = mid;
            start  = mid + 1;

        }else if(key > arr[mid]){

            start = mid + 1;

        }else{

            end = mid - 1;

        }
         mid = start + (end - start)/2;
    }
    return ans;
}

int noO(int firstocc , int lastocc){

    if(firstocc != -1){
        int numb = lastocc - firstocc + 1;
        return numb;

    }else{
       
       return 0 ;
    }
    
}

int main(){

    int al[5] = {0 , 1 , 1 , 1 , 4};
    
   int first =  firstocc(al , 5 , 1);
   int last =  lastocc(al , 5 , 1);

   int first2 =  firstocc(al , 5 ,5 );
   int last2 =  lastocc(al , 5 , 5);

    cout<< "number of times 1 appeared" <<" "<<noO(first , last)<<endl;
    cout<< "number of times 5 appeared" <<" "<<noO(first2 , last2)<<endl;
}
