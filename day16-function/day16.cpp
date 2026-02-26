#include<iostream>
using namespace std;

void checkPrim(int n){



    if(n%2 !=0){
      cout<<"given number is prime"<<endl;
   
    
}else{
    cout<<"not prime ";
}
}

int main (){
    cout << "Hello World!" << endl;
int n = 10;
checkPrim(n);
    return 0;
}
