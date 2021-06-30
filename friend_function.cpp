#include<bits/stdc++.h>
using namespace std;
class  ABC ;//forward class,it tell compiler about the existence of this class/
class XYZ{
    int data1;
    public:
        void getdata(int val){
            data1 = val;
        }
        friend void add(XYZ &,ABC &);//By reference friend function
};

class ABC {
    int data2;
    public:
        void getdata(int val){
            data2 = val;
        }
    friend void add(XYZ &,ABC &);//By refenece friend function
};

void add(XYZ & t1,ABC & t2){
    cout<< "Sum Is:: " <<  t1.data1 + t2.data2;
}
int main(){
    ABC A;
    XYZ X;
    A.getdata(10);
    X.getdata(50);
    add(X,A);//passing object as argument    
    return 0;
}