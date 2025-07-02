#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Complex{
    /*
    private img , real
    public function
    setreal , setimg
    getreal , getimg
    print
    */
   float real;
   float img;
   void Setreal(float i){
    real = i;
   }
     void Setimg(float j){
    img = j;
   } 
   float Getreal(){
    return real;
   }
   float Getimg(){
    return img;
   }
   void print(){
    if(img >= 0 )cout << real << " + "<< img << "\n";
    else cout << real << " - "<< img << "\n";
   }
   Complex Complex:: add (Complex c){
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
}
  Complex Complex:: sub (Complex s){
    Complex temp;
    temp.real = real + s.real;
    temp.img = img + s.img;
  }
};


int main() {
    fast();

    return 0;
}