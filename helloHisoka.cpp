#include<iostream>
#include<string>


using namespace std;

int main() {
  string hisoka;
  hisoka = "hello Hisoka";

  for (int i = 0; i < 150; i++) {
    
    cout << hisoka << "\n";
    hisoka += "a";
  }
  
  return 0;
}
