
#ifndef LAB__4_TASK2_H
#define LAB__4_TASK2_H

using namespace std;

bool isVowel(char a) {
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
        return true;
    }
    return false;
}
bool HalfOfLettersAreVowels(char* str, int begin, int end) {
    int length = end - begin + 1;
    int num = 0;
    for (int i = begin; i <= end; i++){
        if (isVowel(str[i])){
            num++;
        }
    }
    return length == 2*num;
}
bool OnlyOfLatin(const char* str, int begin, int end) {
    if (begin > end){
        return false;
    }
    for (int i = begin; i <= end; ++i){
        if (str[i] < 'a' || str[i] > 'z'){
            if (str[i] < 'A' || str[i] > 'Z'){
                return false;
            }
        }
    }
    return true;
}
int strlength(char* s1) {
    int i = 0;
    while (s1[i] != '\0') {
        i++;
    }
    return i + 1;
}
int Task2(char* s1) {
    int begin = 0;
    int end = 0;
    int numberVow = 0;
    int num = 0;
    int length = strlength(s1);
    for(int i = 0; i < length; ++i) {
        if ((s1[i] == ' ') || (s1[i] == '\0')) {
            end = i - 1;
            if (OnlyOfLatin(s1, begin, end)) {
                num++;
                if (HalfOfLettersAreVowels(s1, begin, end)){
                    numberVow++;
                }
            }
            begin = i + 1;
        }
    }
    cout << "\nThe number of words: " << num;
    cout << "\nThe number of words where the half of letters are vowel: " << numberVow;
    return num;
}

#endif //LAB__4_TASK2_H
