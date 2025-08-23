#include<iostream>
using namespace std;

int* func(){
    int *ptr= new int;
    *ptr=1000;
    cout<<*ptr<<endl;
    return ptr;

}

int main (){

    int *n=func();
    cout<<*n;
    return 0;
}