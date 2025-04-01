#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;    
    }
    return n* factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    if(n < 0){
        cout<<"The factorial of negative number is not defined"<<endl;
    }
    else{
        cout<<"The factorial of the given number is "<< factorial(n) << endl;
    }
}