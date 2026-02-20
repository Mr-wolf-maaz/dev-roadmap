#include<iostream>
using namespace std;

int main (){

    cout<< "HELLO DAY 12\n";

     //today concept is do while loop 
      
     int m = 10;
     int k = 1;

     do { 
        cout << k <<" ";
        k++;
     }while (k<=m);
 

        // check if a number is prime or not 

    int n = 10;
    bool isTure = true;
    int point=0;

    for (int i = 2 ; i*i <= n; i++){

        if (n%i == 0){

            isTure = false;
            if (isTure==false)
            {
                point=i;
                cout<<point<<"\n";

            }
        
        }
    }

    if (isTure ==true){

        cout << "prime number \n";
    }
    else{
        cout<<"non-prime number\n";
    }



return 0;
}