#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;

int main(){

  int i;
  int j;
  int num;
  vector<vector<int> > map;
  vector<int> tmp;
  for(;;){
    for(;;){
      cin >> num;
      if(num < 0) break;
      if(num == '\n') break;
      tmp.push_back(num);
    }
    cout << "num " << num << "\n";
    if(num < 0) break;
    map.push_back(tmp);
    tmp.clear();

  }  
  return 0;
}