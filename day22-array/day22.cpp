#include <iostream>
#include <climits>
using namespace std;

int main(){

    cout<<"Hello day 22 \n";
    // int n=5;
    // int marks[n];



    // cout<<marks[0]<<"\n";
    // cout<<marks[2]<<"\n";
    // cout<<marks[3]<<"\n";
    // cout<<marks[4]<<"\n";
    // cout<<marks[1]<<"\n";
   
// for(int i=0; i<n; i++){
//     cin>>marks[i];
// }

//     for(int i=0; i<n;i++){
//         cout<<marks[i]<<"\n";
//     }

int n = 5;
int arr[n];
 
for(int i=0; i<n;i++){
    cin>>arr[i];
}

int min=INT_MAX;
int max=INT_MIN;
int index;
for(int i =0; i<n; i++){
    if(arr[i]<min){
        min= arr[i];
        index=arr[min];
        
    }

}
    cout<<"min number is :"<<min<<"\n";
       cout<<"min number is :"<<index<<"\n";
    for(int i =0; i<n; i++){
    if(arr[i]>max){
        max= arr[i];
    }
}
    cout<<"max number is :"<<max<<"\n";

    return 0; 
}