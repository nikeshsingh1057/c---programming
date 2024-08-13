                                // custom vector in c++;
#include <bits/stdc++.h>
using namespace std;


class Vector{

    public:
    
    int size;
    int capacity;
    int *arr;
    
    Vector(){
       size=0;
       capacity= 1;
       arr = new int[1];
    }
    void push_back(int ele){
        
        if(size==capacity){
            
            capacity=capacity*2;
            int * arr2 = new int[capacity];
            
            for(int i=0;i<=size;i++)
                arr2[i]=arr[i];
            
            arr = arr2;
        }
        arr[size]=ele;
        size++;
    }
    void pop_back(){
        if(size<0){
            cout<<"Vector is empty";
            return;
        }
        size--;
    }
    int getValue(int idx){
        
        if(idx>size || idx<0){
            cout<<"invalid index";
            return -1;
        }
        return arr[idx];
    }
    
    void print(){
        
        for(int i=0;i<size;i++)
            cout<<arr[i]<<+" ";
        cout<<endl;
    }
};


int main()
{
    Vector v;
    v.push_back(56);
    v.push_back(60);
    v.push_back(80);
    v.push_back(95);
    v.push_back(35);
    v.push_back(45);
    
    v.pop_back();    // ye override kar dega simply.
    v.push_back(70);
    
    v.print();
    int val = v.getValue(3);
    cout<<val;
    return 0;
}
