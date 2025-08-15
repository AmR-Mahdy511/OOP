#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"

class Complex{
// priv section
int real , img;

public:
Complex(){
    // default cons holds zero 
        real = img = 0;
    // user have to enter 2 values
}
Complex(int real ,int img){
    this->real = real;
    this->img = img;
}

// set real & img value
void setreal(int real){
    this->real = real;
}
void setimg(int img){
    this->img = img;
}

// get real & img values
int getreal(){
    return real;
}
string getimg(){
return to_string(img) + "i";
}

// print func
void print(){
    if(img > 0){
        cout << real << "+" << img << "i" << nl;
    }
    else if(img == 0) cout << real << nl;
    else cout << real << img << "i" << nl;
}

// add num1 to num2 ==> num1 += num2 , num2 remains the same
void add(const Complex &num2){
    real += num2.real;
    img += num2.img;
}

// sub num1 to num2 ==> num1 -= num2 , num2 remains the same
void sub(const Complex &num2){
    real -= num2.real;
    img -= num2.img;
}

// multiply num1 to num2 ==> num1 *= num2 , num2 remains the same
void mul(const Complex &num2){
    int new_real = (real*num2.real) - (img*num2.img);
    int new_img = (real*num2.img) + (num2.real*img);
    real = new_real;
    img = new_img;
}

};
void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}


int main(){
    files();
    return 0;
}