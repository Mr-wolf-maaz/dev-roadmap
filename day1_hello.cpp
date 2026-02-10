#include <iostream>


using namespace std;

int main(){
//     cout<<"hello maaz"<<endl;
//     cout<<"first push "<<endl;

//     // This is Operater Program 
    
//     int a= 5;
//     int b= 3;

//     // Increment Decrement Operater 
//     //       5    3     7     5     7     5     5      3  = 40
//     int x = a++ + b++ + ++a + ++b + a-- + b-- + --a + --b;

//     cout << x<<endl;

//     // Binary Operater 

//     int z = a+b;
//     int r = a-b;
//     int w = a*b;
//     int t = a/b;

//     cout << z <<endl;
//     cout << r <<endl;
//     cout << w <<endl;
//     cout << t <<endl;

//     // 

//     cout<<"size of interger value "<<sizeof(int)<<endl;

//     int c = 10<<2;
//     int y = 10>>1;
//     cout <<"this is c "<< c<<endl;
//     cout <<"this is y "<< y<<endl;

//    int no = 6;
//    int sno = 10;

//     cout<<"THIS IS AND OPERATER "<< (no & sno)<<"  THIS IS OR OPERATER "<< (no | sno)<<"  THIS IS NOT OPERATER "<< (no ^ sno)<<endl;
    




//    int number=32;

//    if (number >> 2==2*2){
//     cout<<"true";
//    }
//     else{
//         cout <<"fals";
//     }




    int number =32;
   

    if (number <=0){
        cout<<"false"<<endl;
        while(number >1){

            if(number%2 != 0){
                cout<<"fasle"<<endl;
                number/=2;
            }
            cout<<"true"<<endl;
        }
    }


    return 0;
}
