#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include<numeric>
// #include<bits/stdc++.h>
#include <string>
using namespace std;
int rotation=0;
class vector{
    int *arr=nullptr;
    int size=0;
    int capacity=0;
    public:vector(int size):
        size(size){
            if(size<0)size=1;
            capacity=size+100;
            arr=new int[capacity]{};
             for(int i=0;i<capacity;i++){
            arr[i]=0;
        }
        }
        void set(int indx,int ele){
            arr[indx]=ele;
        }
        void right_rotation(){
int last_ele=arr[size-1];
            for(int i=size-1;i>=0;i--){
               arr[i+1]=arr[i];
            }
            arr[0]=last_ele;
        }
              void left_rotation(){
arr[size]=arr[0];
            for(int i=1;i<=size;i++){
               arr[i-1]=arr[i];
            }
            arr[size]=0;
        }
        void right_rotation_with_steps(){
            int indx=rotation%size;
  while(indx--)right_rotation();
        }
        int deleteing_position(int indx){
            int deleted_element=arr[indx];
            for(int i=indx;i<=size;i++){
                arr[i]=arr[i+1];
            }
           // arr[size-1]=0;
           size--;
            return deleted_element;
        }
        int find_transposition(int value){
          
            for(int i=0;i<size;i++){
if(arr[i]==value){
    if(i==0)return 0;
   else{ swap(arr[i-1],arr[i]);
    return i-1;
    }
    }
    else return -1;
}
}
        void print (){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        }
    ~vector(){
        delete[]arr;
        arr=nullptr;
    }
};
int main(){
    cout<<"enter the size : ";
    int size;cin>>size;
vector arr(size);
for(int i=0;i<size;i++){
    cout<<"enter the element : ";
    int ele;cin>>ele;
arr.set(i,ele);
}
arr.right_rotation();
arr.print();
cout<<"--------------------------"<<endl;
arr.left_rotation();
arr.print();
 cout<<"--------------------------"<<endl;
 cout<<"enter the number of rotation";
 cin>>rotation;
 arr.right_rotation_with_steps();
 arr.print();
 cout<<"--------------------------"<<endl;
cout<<"enter the element to delete : ";
int eledel;cin>>eledel;
cout<<arr.deleteing_position(eledel)<<endl;
arr.print();
cout<<"--------------------------"<<endl;
cout<<"enter the element you want to find : ";
int ele;cin>>ele;
cout<<arr.find_transposition(ele)<<endl;
arr.print();

}