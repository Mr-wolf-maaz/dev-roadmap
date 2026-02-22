#include <iostream>
using namespace std;

int main (){
cout << " hello day 13 \n";
//   patterns no 1
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4 
// 1 2 3 4

int n = 4;
for (int i = 1; i <= n; i++){
    for(int j =1; j<= n; j++){
        cout << j <<" ";
    }

    cout<<"\n";
}

// partten no 2 
//* * * *
//* * * *
//* * * * 
//* * * *

int m = 4 ; 
for(int i = 1; i <= m; i++){
    for(int j =1; j<= m; j++){
        cout << "*"<<" ";
    }

    cout<<"\n";
}

//PARTTEN NO 3 
// A B C D 
// A B C D 
// A B C D 
// A B C D 

int z = 4;

for(int i = 0; i <z; i++){
    char ch = 'A';
    for(int j= 0; j<z; j++){
        cout << ch <<" ";
        ch++;
    }

    cout<<"\n";
}

//PATTERN NO 4
// 1 2 3 
// 4 5 6 
// 7 8 9 

int b = 3;
int y = 1;
for(int i = 0; i < b; i++){
    for(int j= 0; j< b; j++){
        cout << y <<" ";
        y++;
    }

cout << "\n";
}

//PATTERN NO 5
//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 

int q = 4;
for(int i = 0; i < q; i++ ){
    for(int j =0; j<i+1; j++){
        cout << " * ";
    }
cout << "\n";
}


//PATTERN NO 6 
// A 
// B B 
// C C C 
// D D D D 

int n6 = 4;
char ch = 'A';
for(int i = 0; i < n6; i++){
    
    for(int j =0; j < i+1; j++){
        cout << (ch) <<" ";
     
    }
     ch++;
cout << "\n";
}

//PATTERN NO 7
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
int n2 = 4;
for(int i = 0; i < n2; i++){
    
    for(int j =0; j < i+1; j++){
        cout << (i+1) <<" ";
     
    }
cout << "\n";
}

// PATTERN NO 8
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4

int n3 = 4;
for(int i = 0; i < n3; i++){
    for(int j= 1; j<=i+1; j++){
        cout << j << " ";
    }


    cout<<"\n";
}

//PATTERN NO 9
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 

int n4 = 4;
for(int i =0; i < n4; i++){
    for(int j = i+1; j>0; j--){
        cout << j<< " ";
    
    }


    cout << "\n";
}



int n5 = 4;

for(int i=0; i<n5; i++){
    char value = 'A';
    for(int j =i+1; j>0; j--){
        
        cout<< value << " ";
        value++;
    }


    cout << "\n";
}
//PATTERN NO 10
// /
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

//   
 
int numa=4;
for(int i =0; i<numa; i++){
 
  for(int j =0; j< numa-i-1;j++){
    cout<<" ";
   
  }
  cout <<"*";
  if(i!=0){
  for (int j=0; j<2*i-1;j++){
    cout<<" ";
  }
  cout<<"*";

 }

    cout<<"\n";
}

for(int i=0;i<(numa-1);i++){


    for(int j=0; j<i+1; j++){
        cout<<" ";
    }
cout<<"*";

if(i != numa-2){
    for(int j=0; j<2*(numa-i)-5; j++){

        cout<<" ";
    }
    cout<<"*";
}



    cout<<"\n";
}


    return 0;
}