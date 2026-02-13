#include<iostream>
#include<string>
using namespace std;

int main (){



    cout<<"PLEAS ENTER YOUR NAME: \n";

    string name;
    cin>>name;

    cout<<"WELCOME TO HEALTH METR : "<<name<<endl;

        float weight;

    cout << "PLEAS ENTER YOUR WEIGHT : \n";

    
    cin>>weight;

     float hight;

    cout << "PLEAS ENTER YOUR HIGHT IN MERTER : \n";   

    cin>>hight;
   

    float BMI;

    BMI= weight/(hight * hight );

    cout<<"YOUR BMI IS :"<< BMI<<"\n";

    if (BMI< 18.5){

        cout<<"YOUR WEIGHT IS TOO LOW\n";
    }

    else if(BMI >= 18.5 && BMI <=24.9){

        cout<<"YOUR WEIGHT IS NORMAL \n";
    }

    else if (BMI>=25 && BMI <= 29.9){

        cout<<"YOUR WEIGHT IS HIGH \n";
    }

    else if (BMI >= 30){

        cout <<"YOUR WIGHT IS TOO MUCH \n";
    }

    else{
        cout <<" INVALID: \n";
    }

cout<<"\n\n\n\n";
cout <<"these software is only design for your health track so if your weight is low or high or to much than please do some work in your health pleas\n";
cout<< "\n\n******THANK YOU FOR USING OUR SOFTWARE***\n";



    return 0;
}