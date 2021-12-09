#include <iostream>
using std::cout;
using std::cin;
int main(){
  int num = 0;
  int prev = 0;
  int count = 0;
  
  cin >> prev;
  for(;cin >> num;){
    if((num - prev) > 0) count += 1;
    prev = num;
  }
  cout << "increased: " << count <<" times\n";
  return 0;
}