#include<iostream>
using namespace std;
int isSum(int *arr,int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }else{
    int remainingpart = isSum(arr+1,size-1);
    int Sum =arr[0]+remainingpart;
    return Sum;
    }

}
int main(){
    int arr[5]={3,2,5,1,6};
    int size =5;
    int ans=isSum(arr,size);
    cout<<"The answer of the given array is "<<ans <<endl;
   
    
}