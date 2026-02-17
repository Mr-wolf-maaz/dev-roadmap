#include <iostream>
using namespace std;

int main (){
// This is if else codition 
int age;
cin>>age;

if(age>=18){

    cout <<" A person can vote \n";
}

else{
    cout<<"A person can not vote \n";
}

 int n;

 cout << "pleas enter a number to check number \n";
 cin >> n;

 if (n%2==0){

    cout << "The given number is even \n";
 } else {
    cout << "The given number is odd \n";
 }

// This is if else and else if condition 

int marks;
cout << "Pleas enter your marks \n";

cin>>marks;

if(marks>=90){
    cout<<"Grad: A\n";
}
else if (marks>=80 && marks < 90){

    cout <<"Grad: B\n";
}
else if (marks>=50 && marks < 80){

    cout <<"Grad: C\n";
}
 else {

    cout <<" Fails \n";
 }



char ch;
cout<< "enter your character:  ";
cin>> ch;

if (ch >='a' && ch <='z'){

    cout << "YOur character is in lower case \n";
} else if(ch >='A'&& ch <= 'Z'){

    cout << " your character is in upper case \n";
}

else {
    cout <<" invalid character \n";
}

// This is ternary statement 

int m= 30;
cout << (m <=0?"positive":"negitive")<<"\n";


    return 0;
}