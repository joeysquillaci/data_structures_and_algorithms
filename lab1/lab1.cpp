#include <iostream>
#include <string>

using namespace std;

int main() {

   string sentence;

   cout << "Please input a sentence: " << endl;

   getline(cin, sentence);

   int count = 0;
   int end_of_string = 0;
   int index = 0;

   while(true) {
      string word = sentence.substr(index, index + sentence.find(" "));
      index = word.length() + index;
      if(word != "") {
         count++;
      }
      end_of_string++;
      if(end_of_string >= sentence.length()) {
         break;
      }
   }

   cout << "The amount of words in {" << sentence << "} is " << count << endl;

   return 0;

}