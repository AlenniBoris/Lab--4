#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

int Task1(char *s1,char *s2){
    int i;
    int n = strlen(s1) - strlen(s2);
    while (strlen(s1) < strlen(s2)){
        cout << "Word is bigger than phrase. Enter a new one: ";
        cin.getline(s2, 255);
    }
    for(i=0; i <= n;i++){
        int j;
        for (j = 0; j < strlen(s2) ; j++) {
            if (s1[i+j] != s2[j]){
                break;
            }
        }
        if (j == strlen(s2)){
            cout << "first meet ukaz  = "<< &i;
            break;
        }
    }
    return 0;
}

bool isVowel(char a) {
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
        return true;
    return false;
}
bool HalfOfLettersInTheWordAreVowels(char* str, int begin, int end) {
    int length = end - begin + 1;
    int num = 0;
    for (int i = begin; i <= end; i++)
        if (isVowel(str[i]))
            num++;
    return length == 2*num;
}
bool doesConsistOnlyOfLatin(char* str, int begin, int end) {
    if (begin > end)
        return false;

    for (int i = begin; i <= end; ++i)
        if (str[i] < 'a' || str[i] > 'z')
            if (str[i] < 'A' || str[i] > 'Z')
                return false;
    return true;
}
int strlength(char* s1) {
    int i = 0;
    while (s1[i] != '\0') { i++; }
    return i + 1;
}
void Task2(char* s1) {
    int begin = 0;
    int end = 0;
    int numberVow = 0;
    int num = 0;
    int length = strlength(s1);

    for(int i = 0; i < length; ++i) {
        if ((s1[i] == ' ') || (s1[i] == '\0')) {
            end = i - 1;
            if (doesConsistOnlyOfLatin(s1, begin, end)) {
                num++;
                if (HalfOfLettersInTheWordAreVowels(s1, begin, end))
                    numberVow++;
            }
            begin = i + 1;
        }
    }
    cout << "\nThe number of words: " << num;
    cout << "\nThe number of words where the half of letters are vowel: " << numberVow;
}

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
