// Andrew Lee

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> dictionary;
    map<string, string> reverseDict;
    string str;
    vector<string> vec;

    ifstream dict;
    dict.open("dict.txt");
    while (getline(dict, str)) {
        vec.push_back(str);
    }
    printf("%lu\n", vec.size());
    dict.close();
    return 0;
}
