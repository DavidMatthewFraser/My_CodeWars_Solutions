#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

string reverseOrder(string s) {
    string newstring = "";
    for(int i=s.size()-1; i>=0; i--) {
        newstring += s.at(i);       
    }
    return newstring;
}

int main()  {
    string test = "hello welcome to chillies";
    stringstream ss(test);
    string word;
    string newWord;
    while(ss >> word) {
        if (word.length() >= 5)
            newWord = newWord + reverseOrder(word) + " ";
        else
            newWord = newWord + word + " ";
    }
    cout << newWord.erase(newWord.length()-1);
}
