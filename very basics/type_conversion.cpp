#include<iostream>

using namespace std;

//defining an implicit conversion function

int implicit_fun(int a, char b){
    cout<<a+ int (b)<<endl;
    return 0;
}

//defining an explicit conversion

int explicit_fun(int m, char n){
    cout<<m + int(n)<<endl;
    return 0;
}

//main body
int main(){
    int n = 10;
    char ch = 'c';
    implicit_fun(n, ch);
    explicit_fun(n, ch);
    return 0;
}
