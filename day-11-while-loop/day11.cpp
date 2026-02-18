#include<iostream>
using namespace std;

int main (){

cout << "This is day 11\n";

int m=20;
int count = 1;

while(count<= m){

cout<<count<<" ";
count++; 


}

cout <<endl;


    //All are practies question on while loop 

    // first question is sum of all natural number 1 to n

    int k=0;
    int n = 5; 
    int sum=0;

    while(k<=n){

        sum += k;
        k++;
    }

cout<< sum <<endl;



int num ;
cout << "Please enter number :";
cin>>num;


int  reverse = 0;

while (num != 0){

    int digit;
    digit = num % 10;
    reverse = reverse * 10 + digit;
    num /= 10;

}

    cout <<" Reverse of given number is :"<<reverse<<"\n ";



// this program is to print even number between 1 to n 

int lastNum = 10;
int i =0 ;

while (i <= lastNum){
     
    if (i%2 !=0){
        cout << i <<" ";
    }
 i++;

}


// to fined factorial 

int factNum=5;
int j=1;
int factorial=1;

while(j <= factNum){
  
    factorial *= j;

j++;
}
     cout << factorial<< endl;


// this is to count digits of number in given number 

int num1=1237838383;
int count1=0;

while (num1 != 0 ){
     num1 /= 10;
     count1 ++;
}

// cout << count1 << endl;

int num2 = 73843;
int maxDigit =  0;

while (num2 != 0 ){
    
   int digit = num2 %10 ;
   if ( digit > maxDigit){
    maxDigit= digit;
   }

   num2 /= 10;

}
 cout << " max number is :"<< maxDigit<< "\n";




    return 0;
}