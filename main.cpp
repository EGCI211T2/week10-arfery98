#include <iostream>
#include <iomanip>

using namespace std;

#include "Time.h"

int main(){
    /*struct Time t1,t2,t3;
    cout<<"What time was it?";
    getTime(t1);
    cout<<"What time is it now?";
    getTime(t2);
    t3=subtract(t2,t1); //t3=t2-t1
    cout<<"Time diff is ";
    display(t3);*/

    Time t1,t2,t3;
    t1.set_time(5,6,7);
    t2.set_time(6,70,8);
    t1.display();
    t2.display();

    cout<<"What time was it?";
    t1.getTime();
    t1.display();
}