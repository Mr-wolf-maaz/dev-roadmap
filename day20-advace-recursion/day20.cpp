#include<iostream>
using namespace std;

int fib(int n){
    if(n==0||n==1){
        return n;
    }


    return fib(n-1)+fib(n-2);
}

bool isSotred(int arr[], int n){
    if(n==0 || n==1){
       return true;
    }

    return arr[n-1]>=arr[n-2] && isSotred(arr, n-1);
}

int binarys(int arr[], int target, int st, int end){
     if(st<=end){
        int mid = st + (end-st)/2;

        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            return binarys(arr, target, mid+1,end);
        }else if(arr[mid]>target){
            return binarys(arr, target, st, mid-1);
        }

     }
     return -1;

}

int main(){

cout<<"Hello day 20\n";

int n =8;
cout<<fib(n)<<endl;

int target = 5;
int arr[]={1,2,3,4,5,6};

cout << binarys(arr,target, 0, 6)<<endl;

    return 0;
}