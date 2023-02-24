#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter value of a = ";
    cin>>a;
    cout<<"enter value of b = ";
    cin>>b;
    c=b;
   
    b=a;
    a=c;
    cout<<"swap value of a = "<<a<<endl;
    cout<<"swap value of b = "<<b;
}
