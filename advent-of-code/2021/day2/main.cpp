#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main(){
  string word;
  int num;
  int h_pos = 0;
  int depth = 0;

  cin >> word;
  for(;cin >> num;){
    switch(word[0]){
      case 'f':
        h_pos += num;
        break;
      
      case 'd':
        depth += num;
        break;
      
      case 'u':
        depth -= num;
        break;

      default:
        cout << "Your logic is flawed, Erick.\n";
        exit(1);
    }
    cin >> word;
  }
  cout << "Horizontal: " << h_pos << "\n";
  cout << "Depth: " << depth << "\n";
  cout << "Product: " << depth*h_pos << "\n";

  return 0;
}