#include <iostream>
using namespace std;

int max(int a, int b){
    if(a<b){
        return b;
    }else{
        return a;
    }
}

int max(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
}


void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"First the value of a = 5 and now:"<<a<<"\n";
    cout<<"First the value of b = 3 and now:"<<b<<"\n";
}

void swap(int a, int b, int c){
    int temp;
    temp=a;
    a=b;
    b=c;
    c=temp;
    cout<<"First the value of a = 5 and now:"<<a<<"\n";
    cout<<"First the value of b = 3 and now:"<<b<<"\n";
    cout<<"First the value of c = 8 and now:"<<c<<"\n";
}

int  main (){

cout <<"hello day 17 \n";

cout <<max(2,4)<<"\n";
cout <<max(233,5665,3535)<<"\n";

swap(5,3);
swap(5,3,8);

    return 0;
}