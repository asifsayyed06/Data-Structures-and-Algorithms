#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,0,5,4,0,6,0,7};
    int n=10;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while (j<n){
        arr[j]=0;
        j++;
    }
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
return 0;
}
