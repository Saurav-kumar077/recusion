#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans=fibonacci(n-1)+fibonacci(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the nth number "<<endl;
    cin>>n;
    int ans=fibonacci(n);

    cout<<"The answer is "<< ans <<endl;
    return 0;
    
}