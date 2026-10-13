#include<iostream>
using namespace std;
void f(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    f(i+1,n);
        
}
int main(){
    int n=5;
    f(1,n);
}
