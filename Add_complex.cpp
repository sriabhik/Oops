#include<bits/stdc++.h>
using namespace std;
class complex{
    int a ;
    int b;
    public:
        complex(){}
        complex(int val1 , int val3){
            a = val1;b = val3;
        }
        friend complex sum(complex,complex){

        }
        friend void Display(){

        }
}; 
int main(){
    complex A;
    complex A(12,32);
}