// Your First C++ Program

#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string text = "This is a sample string for finding a substring.";
    std::string substring = "sample";

    size_t found = text.find(substring);

    if (found != std::string::npos) {
        std::cout << "Substring found at position: " << found << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    string Text2 = "134.321.3.9:98";
    string tectocopia;
    int j = 0;
    int tamaño = size(Text2);
    cout << tamaño << endl;
    int found2 = Text2.find(".");
    cout << found2 << endl;
    tectocopia = Text2.substr(6,-1);
    cout << tectocopia << endl;
    found2 ++;
    found2 = Text2.find(".", found2);
    cout << found2 << endl;
    found2 ++;
    found2 = Text2.find(".", found2);
    cout << found2 << endl;
    found2 ++;
    found2 = Text2.find(":", found2);
    cout << found2 << endl;


    return 0;
}

