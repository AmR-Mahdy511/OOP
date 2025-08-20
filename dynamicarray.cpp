#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"

class dynamic_array{

int current_idx,capacity;
int *arr;

public:
// deafult constructor with size 5
dynamic_array(){
    arr = new int[5]();
    capacity = 5;
    current_idx = 0;
}

// parameterized constructor 
dynamic_array(int size){
    arr = new int[size];
    current_idx = 0;
}

// copy constructor to avoid shallow copy
dynamic_array(const dynamic_array &other) {
    capacity = other.capacity;
    current_idx = other.current_idx;
    arr = new int[capacity];
    for (int i = 0; i < current_idx; i++) arr[i] = other.arr[i];
}

// copy Assignment Operator
dynamic_array& operator=(const dynamic_array &other){
    if(&other == this){
        return *this;
    }
    delete []arr;
        capacity = other.capacity;
    current_idx = other.current_idx;
    arr = new int[capacity];
    for (int i = 0; i < current_idx; i++) arr[i] = other.arr[i];
    return *this;
}

// resize arr with new size
void resize(int new_capacity) {
 int *new_arr = new int[new_capacity]();
 for (int i = 0; i < current_idx; i++){new_arr[i] = arr[i];} 
    delete[] arr;
    arr = new_arr;
  capacity = new_capacity;
}

// add ele in arr
// if idx == size ==> size with me multiply by 2 ans copy our array in new array and delete arr(first array)
void add(int element){
    if(current_idx == capacity){
    resize(capacity*2);
    }

        arr[current_idx] = element;
        current_idx++;
    
}

// add element in idx
void add(int idx , int element){
    if(idx < 0){
  cout << "Out Of Bounds" << nl;
  return;
    }
    // to make size bigger
    while(idx >= capacity){
        capacity *= 2;
    }
    resize(capacity);
    arr[idx] = element;
    if(idx >= current_idx) current_idx = idx + 1;
}

// function to print the capacity of array
int Capacity(){
    return this->capacity;
}

// print size of array
int size(){
    return current_idx;
}

// get element and index => idx
int get_element(int idx){
    if(idx >= 0 && idx < current_idx){
     return arr[idx];
    }
    else{
        cout << "This is not valid" << nl;
        return -1;
    }
}
// print all array values startes from idx 0 
void print(){
    for(int i = 0 ; i < size() ; i++) cout << arr[i] << sp;
    cout << nl;
}
~dynamic_array() {
    delete[] arr;
}

};
