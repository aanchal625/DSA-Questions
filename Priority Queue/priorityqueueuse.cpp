#include<iostream>
using namespace std;
#  include "priorityqueue.h"

int main(){
    priorityqueue p;

    p.insert(100);
    p.insert(10);
    p.insert(150);

    cout<<p.getmin<<" ";

    cout<<p.removeMin<<" ";

}