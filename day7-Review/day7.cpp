#include<iostream>
using namespace std;

int main (){

// HELLO EVERYONE TODAY IS DAY 7 ANS TO GOAL IS REVIWE + MINI-PROJECT * SIMPLE CALCULATOR
int selection;
cout <<"**********WELCOME TO ADVANCE CALCULATOR**********\n";
cout <<"**                                             **\n";
cout <<"**                                             **\n";

cout <<"**********Please Select One Number **********\n";
cout <<"**    1. For Arithmetic   Calculation      **\n";
cout <<"**    2. For Finding CGPA                  **\n";
 
cin >> selection;




if (selection==1){
cout <<"**********WELCOME TO ARITHMATIC CALCULATOR**********\n";

float number1;
cout <<"**********Pleas Enter First Number**********\n";
cin >> number1;

float number2;
cout <<"**********Pleas Enter Second Number**********\n";
cin >> number2;

char operation;
cout<<"PLEAS ENTER YOUR OPRATION YOU WANT TO PERFORM\n";
cin>>operation;

if(operation=='+'){
    cout<<"YOU SELECT ADDITIO OF NUMBER :\n YOUR ANSWER IS : "<<number1+number2<<"\n";
}
else if (operation=='-'){

    cout<<"YOU SELECT SUBSTRACTION OF NUMBER :\n YOUR ANSWER IS : "<<number1-number2<<"\n";
}

else if (operation=='*'){
    cout<<"YOU SELECT MULTIPLICATION OF NUMBER :\n YOUR ANSWER IS : "<<number1*number2<<"\n";
}

else if (operation=='/'){
    cout<<"YOU SELECT DIVISON OF NUMBER :\n YOUR ANSWER IS : "<<number1/number2<<"\n";
}

else{
   cout<<"YOU ENTER INVALID OPERATIION\n";
}

}

else if (selection==2){

    cout <<"**********WELCOME TO CGPA CALCULATOR**********\n";

    float grade;
    cout <<"Pleas Enter Your Grade \n";
    cin>> grade;

    float creadithour;
    cout<<"Pleas Enter Creadit Houre\n";
    cin>> creadithour;


    float CGPA = grade * creadithour;

    cout <<"Your CGPA is : "<< CGPA <<"\n";

}
  cout<<"\n\n\n\n\n";

cout<<"*****THANKS TO USE OUR CALCULATOR*****\n";

    return 0;
}