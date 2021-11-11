#include <iostream>
#include "Tasks/task1.h"
#include "Tasks/task2.h"

using namespace std;

int main() {
    char s1[255];
    cout << "Enter your phrase: ";
    cin.getline(s1, 255);
    char s2[255];
    cout << "Enter word or symbol for search: ";
    cin.getline(s2, 255);
    Task1(s1,s2);
    Task2(s1);
}