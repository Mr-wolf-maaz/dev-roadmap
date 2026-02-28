#include <iostream>
using namespace std;


// Recursion to finde n to 1 number 
void printnum(int n){
      if(n==1){
        cout << n<<"\n";
        return;
    }
    cout<<n<<"\n";
    printnum(n-1);
  
}

// Recursion to finde n factorial 

int factorial(int num){
    if(num==0){
      
        return 1;
    }

return num*factorial(num-1);

}

int sum(int n){
    if (n==1){
        return 1;
    }
    return n + sum(n-1);
}

int main(){
cout << "hello day 18\n";

// today goal is to know recursion


// printnum(n);
// cout<<factorial(10)<<"\n";
cout<<sum(2)<<endl;

    return 0;
}