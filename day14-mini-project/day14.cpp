#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
    
string password="mypassword";
string userpassword;
cout<<"enter your password\n";
cin>>userpassword;


while(userpassword != password){

    cout<<"opps your password is wrong try agin:\n ";
    cin>>userpassword;

}




    srand(time(0));
    int number = rand() % 100 + 1;

  
    int gusseNumber;
    int attampt = 0;
    int maxAttampt=5;

    
while(attampt < maxAttampt){
cout<< "PLEAS ENTER YOU GUSSE NUMBER :";
    cin>>gusseNumber;

    attampt++;

   
    if (gusseNumber > number){
        cout <<"OOP'S YOUR NUMBER IS GREATER THAN GUSSE NUMBER \n TRY AGAIN \n";
    }
else if (gusseNumber < number){
        cout <<"OOP'S YOUR NUMBER IS LESS THAN GUSSE NUMBER \n TRY AGAIN \n";
    }
    else{
        cout<<" well done your number is correct \n";
           cout<<" you did it in  "<< attampt<< " number \n";
           break;

    }


}

if (gusseNumber != number){
    cout<<"OOP'S GAME OVER YOU LOSS:\n";
    cout<<"THE CORECT NUMBER IS :"<<number<<"\n";
}







    return 0;
}