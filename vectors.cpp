#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> vec1;
    vec1= {1,2,3,4,5};
    vector<int> vec2 (10 , 1);

    int i=0,j=0;
    while(i<vec1.size()){
        cout<<vec1[i]<<" ";
        i++;
    }cout<<endl;

    while(j<vec2.size()){
        cout<<vec2[j]<<" ";
        j++;

    }cout<<endl;

    return 0;
}