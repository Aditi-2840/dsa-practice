#include<iostream>
using namespace std;

int main(){
    
    int a=10;
    int &r=a;  //Declaration of reference
    cout<<r<<endl;
    r++;
    cout<<r<<endl;

}