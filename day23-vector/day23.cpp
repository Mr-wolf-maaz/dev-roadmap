#include <iostream>
#include <vector>

using namespace std;

void reversv(vector<int>& vec, int size){
    int start=0;
    int end = size-1;
    while(start < end){
        swap(vec[start],vec[end]);

        start ++;
        end --;
    }
}

int main(){
cout<<"vector\n";



    vector<int> vec= {1, 2, 3, 4, 5};
    int size = vec.size();
     
 reversv(vec , size);

 for(int val : vec){
    cout<< val << " ";
 }
cout<<endl;
    
vector<int> vece= {1, 2, 3, 4, 5};
     int target =3;

     for(int val: vece){
        if(val== target){
            cout<<"Target found and target is : "<<val<<endl;
        }
     }




    vector<int> veci;
    vector<int> vect = {1,2,3};
    vector<int> vecto (5,3);
    vector<char> ve = {'a', 'b', 'c', 'd'};
          
        cout<<"size ="<<ve.size()<<endl;
        cout<<"size ="<<veci.size()<<endl;
        veci.push_back(25);
        cout<<"size ="<<veci.size()<<endl;
        ve.pop_back();
     
        cout<<ve.front()<<ve.back()<<endl;
        cout<<ve.at(1)<<endl;

      for(char i : ve){
        cout<<i<<endl;
      }
     




    return 0;
}