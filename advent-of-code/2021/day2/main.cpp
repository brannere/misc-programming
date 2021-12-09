#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main(int argc, char* argv[]){

  string word;
  bool isTaskPart1 = true;
  long long int num = 0;
  long long int h_pos = 0;
  long long int depth = 0;
  long long int aim = 0;

  if(argc > 1 && argv[1][0] == '2') isTaskPart1 = false;

  cin >> word;
  for(;cin >> num;){
    switch(word[0]){
      case 'f':
        h_pos += num;
        depth += (aim*num);
        break;
      
      case 'd':
        if(isTaskPart1) depth += num;
        aim += num;
        break;
      
      case 'u':
        if(isTaskPart1) depth -= num;
        aim -= num;
        break;

      default:
        cout << "Your logic is flawed, Erick.\n";
        exit(1);
    }
    cin >> word;
  }
  cout << "Horizontal: " << h_pos << "\n";
  cout << "Depth: " << depth << "\n";
  cout << "Aim: " << depth << "\n";
  cout << "Product: " << depth*h_pos << "\n";

  return 0;
}