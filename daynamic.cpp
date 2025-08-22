#include<iostream>
using namespace std;

int main (){
    int size;
    cin >>size;

    int *arr=new int[size];
    int n=1;
    for(int i=0;i<size;i++){
        arr[i]=n++;
        cout<<arr[i];
        

    }

    return 0;
}