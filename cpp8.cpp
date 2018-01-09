/*cpp8.cpp*/
#include <iostream>
using namespace std;

void swap(int &x, int &y){
  int z;
  z = x;
  x = y;
  y = z;
}

int main(){
  int a,b;

  cout << "値を入力してください\n";
  cin >> a;
  cout << "\n値を入力してください\n";
  cin >> b;
  cout << "\n";

  swap(a, b);
  cout << a << "\n" << b << "\n";
    
}
