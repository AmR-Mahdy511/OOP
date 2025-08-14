#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define nl "\n"

class fraction{
int numerator,denominator;


public:
fraction(){
// if user don't enter values , values will be garbage
}
// // user have to enter 2 values  so only one default constructor
fraction(int numerator , int denominator){
this->numerator = numerator;
this->denominator = denominator;
}
// set numerator & denominator
void setnumerator(int numerator){
    this->numerator = numerator;
}
void setdenominator(int denominator){
    this->denominator = denominator;
}
// get numerator & denominator
int getnumerator(){
    return numerator;
}
int getdenominator(){
    return denominator;
}
// simplify the fraction
void simplify(){
int gcd_res = __gcd(numerator , denominator);
numerator /= gcd_res;
denominator /= gcd_res;
}
// add f1 to f2 and f2 remains the same (f1 = f1 + f2 , f2 still equal f2)
void add(fraction f2){
int new_denominator = denominator * f2.denominator;
int new_numerator = (numerator*f2.denominator) + (f2.numerator*denominator);
numerator = new_numerator; 
denominator = new_denominator;
simplify();
}
// multiply f1 to f2 and f2 remains the same (f1 = f1 * f2 , f2 still equal f2)
void mul(fraction f2){
    numerator *= f2.numerator;
    denominator *= f2.denominator;
    simplify();
}
// print fraction
void print(){
    cout << numerator << "/" << denominator << nl;
}
};
void files() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}


int main(){
    files();
    fraction f1(10,20);
    f1.print();
    f1.setdenominator(40);
    f1.setnumerator(120);
    f1.print();
    fraction *f2 = new fraction(99,5);
    (*f2).print();
    f1.add(*f2);
    f1.print();
    f2->print();
    (*f2).setdenominator(33);
    cout << (*f2).getdenominator() << nl;
    f1.mul(*f2);
    f1.print();
    return 0;
}