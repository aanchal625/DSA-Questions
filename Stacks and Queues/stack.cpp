#include<iostream>
using namespace std;
#include "stackswitharrays.cpp"
int main(){
    StackUsingArray s;
    s.push(10);
    s.push(80);
    s.push(70);
    s.push(67);
    s.push(87);
    cout<<s.top()<<endl;
    cout<<s.top()<<endl;
    cout<<s.top()<<endl;
    cout<<s.top()<<endl;
    cout<<s.top()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
}
