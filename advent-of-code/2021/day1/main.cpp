#include <iostream>
using std::cout;
using std::cin;
int main(int argc, char* argv[]){
  int num = 0;
  int prev = 0;
  int count = 0;
  
  if(argv[1][0] == '1'){
    /* Part 1 */
    cin >> prev;
    for(;cin >> num;){
      if((num - prev) > 0) count += 1;
      prev = num;
    }
    cout << "Part 1: increased: " << count <<" times\n";

    count = 0;
  }
  else if(argv[1][0] == '2'){
    /* Part 2 */
    int one, two, three, next;
    cin >> one;
    cin >> two;
    cin >> three;

    for(;cin >> next;){
      if((two+three+next) - (one + two + three) > 0){
        count += 1;
      }
      one = two;
      two = three;
      three = next;
    }


    cout << "Part 2: increased: " << count <<" times\n";
  }
  return 0;
}