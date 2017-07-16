// Andrew Lee
// processes list of words to be lowercase

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char c;

    ifstream words;
    words.open("words.txt");
    ofstream dict;
    dict.open("dict.txt");
    while ((c = words.get()) > 0) {
        dict.put(tolower(c));
    }
    words.close();
    dict.close();
    return 0;
}
