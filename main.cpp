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
    }
    return 0;
}

void Task2(char s1[255],int count){
    count++;
    for (int i = 0; i < strlen(s1); i++){
        if (s1[i] == ' '){
            count++;
        }
    }
    cout <<"Number of words: "<< count;
}



int main() {
    char s1[255];
    cout << "Enter your phrase: ";
    cin.getline(s1, 255);
    char s2[255];
    cout << "Enter word or symbol for search: ";
    cin.getline(s2, 255);
    int count = 0;

    Task1(s1,s2);
    Task2(s1,count);


}
