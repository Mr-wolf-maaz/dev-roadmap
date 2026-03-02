#include<iostream>
using namespace std;

unsigned long long fCalculater(unsigned long long  n){
    if(n==0){
        return 1;
    }

return n*fCalculater(n-1);


}

unsigned long long fib(unsigned long long n){
    if(n==0||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int sumArray(int arr[], int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+sumArray(arr,n-1);
}



int main(){
    cout<<"PLEAS SELECT OPTION\n1. TO FINDE FACTORIAL\n2. TO FINED FABONACCI\n3.TO FINDE SUM OF ARRAY\n";
    int select;
    cin>>select;

if(select==1){
cout<<"Hello day 21\n";
cout<<"\n";
cout<<"**********WELCOME TO FACTORIAL CALCULATER**********\n\n\n";

unsigned long long  n;
cout << "Pleas enter number: ";
cin>>n;

cout<<"YOUR ANSWER IS: "<<fCalculater(n)<<"\n";
}else if(select==2){
unsigned long long n;
cout<<"Pleas enter number to: ";
cin>>n;
cout<<fib(n)<<"\n";
}else if(select==3){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"pleas enter your array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"your answer is: "<<sumArray(arr,n)<<"\n";
}
else{
    cout<<"Incorrect input\n";
}

    return 0;
}