// Andrew Lee

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream words;
    words.open("words.txt");
    ofstream dict;
    words.open("dict.txt");
    while (char c = words.get()) {
        printf("%d", c);
    }
    return 0;
}
