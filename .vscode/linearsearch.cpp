#include<iostream>
using namespace std;
bool isFound(int *arr , int size,int key){
    if(size==0){
        return false;
    }
    if (arr[0]==key){
        return true;
    }
    else{
    bool remainingpart= isFound(arr+1,size-1,key);
       return remainingpart;
    }
}
int main(){
    int key;
    cout<<"Enter the key "<<endl;
    cin>>key;
    int arr[5]={1,4,8,6,9};
    int size = 5;
    bool found =isFound(arr,size,key);
    if(found){
        cout<<"Key is found "<<endl;
    }
    else{
        cout<<"Key is not available in the given array "<<endl;
    }
    return 0;
}