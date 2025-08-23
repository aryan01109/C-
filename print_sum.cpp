#include<iostream>
#include<vector>
using namespace std;

vector<int> sum(vector<int> arr,int targate){
    int st=0,end=arr.size()-1;

    vector<int> ansvecor;
    int sum=0;

    while(st<end){ 
        sum=arr[st]+arr[end];

    if(sum==targate){
        ansvecor.push_back(st);
        ansvecor.push_back(end);
        return ansvecor;
    }
    else if(sum>targate){
        end--;
    }
    else if(sum<targate){
        st++;
    }
     
  }return ansvecor;
}

int main(){

    vector<int> arr={2,7,11,15};
    int targate=9;


    vector<int> result=sum(arr,targate);
    cout<<result[0]<<" "<<result[1];
    return 0;
}