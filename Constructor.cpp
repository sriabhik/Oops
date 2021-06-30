#include<bits/stdc++.h>
using namespace std;
class sum{
    int  a ;
    int  b;
    public:
    //Also Eample of overload contructor
        sum(){ //Default Constructor
            a = 5; b = 7;
        }
        sum(int val1 , int val2 ){//Parametrized Constructor
            a = val1;
            b =  val2;
        }
        sum(sum &i){
            a = i.a;b = i.b;//copy Constructor
        }
        void Display_sum(){
            cout << "sum Is:: "<< a+b<<endl;
        }

};
int main(){
    sum t;
    sum t1(10,20);
    sum t2(t1);//passing reference Of object t1
    t.Display_sum();t1.Display_sum();t2.Display_sum();
    return 0;

}