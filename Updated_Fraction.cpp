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
void add(fraction &f2){
int new_denominator = denominator * f2.denominator;
int new_numerator = (numerator*f2.denominator) + (f2.numerator*denominator);
numerator = new_numerator; 
denominator = new_denominator;
simplify();
}

// multiply f1 to f2 and f2 remains the same (f1 = f1 * f2 , f2 still equal f2)
void mul(fraction &f2){
    numerator *= f2.numerator;
    denominator *= f2.denominator;
    simplify();
}

// operator add function ==> f3 = f1 + f2
fraction operator+(fraction &f2) const{
int new_numerator = (numerator*f2.denominator) + (f2.numerator*denominator);
int new_denominator = denominator * f2.denominator;
fraction f_new(new_numerator , new_denominator);
// numerator = new_numerator; 
// denominator = new_denominator;
f_new.simplify();
return f_new;
}

// operator mul function ==> f3 = f1 * f2
fraction operator*(fraction &f2) const{
    int new_numerator = numerator * f2.numerator;
    int new_denominator = denominator * f2.denominator;
    fraction f_new(new_numerator , new_denominator);
    f_new.simplify();
    return f_new;
}

// operator == to check is f1 equal f2 ?
bool operator==(fraction &f2) const{
return ((numerator == f2.numerator) && (denominator == f2.denominator));
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
    fraction f1(10,5);
    fraction *f2 = new fraction(11,23);
    fraction f3 = f1 + (*f2);
    f3.print();
    fraction f4 = f1 * (*f2);
    f4.print();
    if(f1 == *f2){
    cout << "YES" << nl;
    }
    else cout << "NO" << nl;
    return 0;
}
