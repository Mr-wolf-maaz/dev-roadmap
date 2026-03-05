#include<iostream>
using namespace std;

#define COLM 3

int maxSum(int arra[][COLM], int row, int colm){
    
    int maxi= 0;
    for(int i=0; i<row; i++){
         int mNo =0;
     for(int j=0; j<colm; j++){
        mNo = mNo + arra[i][j];
        }
        maxi = max(maxi, mNo );
    }
    return maxi;
}

int main (){
 
    cout<<"Hello day 24\n";

    int row = 4;
    int arr[row][COLM]={{1,2,88},{5,6,7},{8, 9, 10}, {11, 12, 13}};


      cout<< maxSum(arr, row, COLM)<<endl;
//     arr[2][1]=19;     

// cout<<arr[2][1]<<"\n";

// for(int i=0; i<row; i++){
//     for(int j=0; j<colm; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// int arra[row][colm];

// for(int i=0; i<row; i++){
//     for(int j=0; j<colm; j++){
//         cin>>arra[i][j];
//     }    
// }
// cout<<endl;

// int target= 5;
// bool flage = false;

// for(int i=0; i<row; i++){
//     for(int j=0; j<colm; j++){
//         if(arra[i][j]==target){
//             flage = true;
            
//         }
//         }
       
//     }  
//     if(flage == true  ){
//         cout <<"Target is found "<<target<<endl;
//     }  
//     else{
//             cout<<"Target is not found \n";
//     }

    return 0;
}