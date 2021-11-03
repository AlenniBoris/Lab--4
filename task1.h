
#ifndef LAB__4_TASK1_H
#define LAB__4_TASK1_H

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
    return i;
}

#endif //LAB__4_TASK1_H