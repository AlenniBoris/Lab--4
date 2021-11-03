#include <iostream>
#include "task1.h"
#include "task2.h"
#include "tests.cpp"

using namespace std;

int main() {
    char s1[255];
    cout << "Enter your phrase: ";
    cin.getline(s1, 255);
    char s2[255];
    cout << "Enter word or symbol for search: ";
    cin.getline(s2, 255);
    Task1(s1,s2);
}