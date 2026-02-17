#include<iostream>
using namespace std;

int main (){

//THis is for loop statment

for (int i = 0 ; i<10; i=i+2){
 
    cout << i;
   
}

cout << "\n";

// This program fine sum of 1 to n and also use of break statment 

int n;
cin>> n;
int sum=0;

for (int i=1; i <= n; i++){

 sum = sum+i;

 if(i==5){
    break;
 }

}

cout<< sum<<"\n";

// This program find sum of odd numbers

int no =  5;
int sum2 = 0;

for (int i =1; i<= no ; i++){

    if (i%2!=0)
    {
        sum2 += i;
    }
}

cout << sum2<<"\n" ;






    return 0;
}