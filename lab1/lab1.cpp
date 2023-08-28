// Create a program that counts the number of words in an inputted string.

#include <iostream>
#include <string>

using namespace std;

int main() {

   // Define string and get from user
   string sentence;
   cout << "Please input a sentence: " << endl;
   getline(cin, sentence);

   // Initialize variables for parsing through string
   int count = 0;
   int end_of_string = 0;
   int index = 0;

   // Parses through string based on number of spaces
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

   // Output number of words to user
   cout << "The amount of words in {" << sentence << "} is " << count << endl;

   return 0;

}