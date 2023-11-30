#include <iostream>
#include <string>

using namespace std;

double distancia(string str1, string str2) {
    double dist1 = str1.length();
    double dist2 = str2.length();
    return (dist1 + dist2) / 2;
}

int main() {
    string str1 = "prova";
    string str2 = "marcos";
    double avgLength = distancia(str1, str2);
    cout << "a distancia entre strings " << str1 << " e " << str2 << " eh " << avgLength << endl;
    return 0;
}

