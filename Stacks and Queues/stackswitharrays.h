#include<climits>
class StackUsingArray {
    int *data;
    int nextIndex;
    int capacity;

    public :
    StackUsingArray(){
        data=new int[4];
        nextIndex=0;
        capacity=4;
    }

    //return the number of elements  present in my stack
    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex==0;
    }

    //insert an element
    void push(int element){
        if(nextIndex==capacity){
            int *newdata=new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newdata[i]=data[i];
            }
            capacity*=2;
            delete [] data;
            data=newdata;
            // cout<<"Stack full"<<endl;
            // return;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    //to delete the element
    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return 12345678;
        }
        nextIndex--;
        return data[nextIndex];
    }

    //to access the element
    int top(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return 12345678; 
        }
        return data[nextIndex-1];
    }
};