#include<vector>
class priorityqueue{
    vector<int> pq;
    public:

    priorityqueue(){

    }
    bool isEmpty(){
        return pq.size()==0;
    }
    //return number of elements present
    int getsize(){
        return pq.size();
    }
    int getmin(){
        if(isEmpty){
            return 0; //priority queue empty
        }
        return pq[0];
    }

    void(insert(int element){
        pq.push_back(element);
        int childindex = pq.size() - 1;
        while(childindex > 0){
            int parentindex = (childindex - 1) / 2;
            if(pq[childindex] < pq[parentindex]){
                int temp = pq[childindex];
                pq[childindex]=pq[parentindex];
                pq[parentindex] = temp;
            }
            else{
                break;
            }
            childindex = parentindex;
        }
    }

    int removeMin() {
        if(isEmpty()){
            return 0;
        }
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        
        //down - heapify
        int pi=0,lci=2*(pi)+1,rci=2*(pi)+2;
        while(lci < pq.size()){
        int minidx=pi;
        if(pq[minidx] > pq[lci]){
            minidx = lci;
        }
        if( rci < pq.size() && pq[rci] < pq[minidx]){
            minidx = rci;
        }
        if(minidx == pi){
            break;
        }
        int temp = pq[minidx];
        pq[minidx]= pq[pi];
        pq[pi]=temp;

        pi=minidx;
        lci = 2*(pi)+1;
        rci = 2*(pi)+2;
        }
        return ans;
        
    }

};