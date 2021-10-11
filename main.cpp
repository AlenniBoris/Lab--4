#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

int Task1(char s1[255],char s2[255]){
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
            printf("substring at index i = %d \n", i);
            break;
        }
        if (j != strlen(s2)){
            printf("Symbol is not found\n");
            break;
        }
    }
    return 0;
}

void Task2(char s1[255]){
    int slovo = 0, count = 0;
    int i = 0;
    int a = '65';
    int b = '90';
    int c = '97';
    int d = '122';

    while(a<=s1[i]<=b && c<=s1[i]<=d){
        while (s1[i] == ' ' && s1[i] != '\0'){
            i++;
        }
        while (s1[i] != '\0') {
            if (s1[i] != ' ' && slovo == 0){
                slovo = 1;
                count++;
            }
            else if (s1[i] == ' '){
                slovo = 0;
            }
            i++;
        }
        cout << "Number of words: " << count;
        exit(1);
    }
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
