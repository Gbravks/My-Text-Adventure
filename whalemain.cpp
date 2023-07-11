#include <iostream>
#include <vector>
#include <string>
 
int main() {
 
  // Whale, whale, whale.
  // What have we got here?
 
 std::string input = "turpentine and turtles";

 std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
 std::vector<char> result;
 
 for (int i = 0; i < input.size(); i++) {
  for (int j = 0; j < vowels.size(); j++) {
   for (int k = 0; k < result.size(); k++) {
  std::cout << result[k];
  if (input[i] == 'u' || input[i] == 'e') {
 
  result.push_back(input[i]);
 
}
 
}
  
 
    // Code goes here:
 
 if (input[i] == vowels[j]) {
 
      result.push_back(input[i]);
 
    }
 
    }
 
  }
 
}
 