#include "gtest/gtest.h"
#include "../Tasks/task1.h"
#include "../Tasks/task2.h"

TEST(SearchingForRightAdress, TestRightAdress1){
    char* string = "-25,00144555";
    char* character = "1";
    ASSERT_EQ(Task1(string, character), 6);
}
TEST(SearchingForRightAdress, TestRightAdress2){
    char* string = "-222+333+11*4444";
    char* character = "*";
    ASSERT_EQ(Task1(string, character), 11);
}
TEST(SearchingForRightAdress, TestRightAdress3){
    char* string = "       arrarara           1111       ";
    char* character = "1";
    ASSERT_EQ(Task1(string, character), 26);
}
TEST(SearchingForRightAdress, TestRightAdress4){
    char* string = "ffffff              131 213 124r3 f44              dsdad3232  aaaabbbb";
    char* character = "b";
    ASSERT_EQ(Task1(string, character), 66);
}
TEST(SearchingForRightAdress, TestRightAdress5){
    char* string = "15fffff 177 gvgg18 75rf*cfgxfdz%dxdf hhhh ufh12 uuuu 7778";
    char* character = "%";
    ASSERT_EQ(Task1(string, character), 31);
}
TEST(SearchingForRightAdress, TestRightAdress6){
    char* string = "766fgcdfgxgfg aavv tftdtr 765t ujhjjhvgvvghvhgh";
    char* character = "t";
    ASSERT_EQ(Task1(string, character), 19);
}


TEST(CheckingNumberOfWords, TestNumberOfWords1){
    char* string = "-25,00144555";
    ASSERT_EQ(Task2(string), 0);
}
TEST(CheckingNumberOfWords, TestNumberOfWords2){
    char* string = "-222+333+11*4444";
    ASSERT_EQ(Task2(string), 0);
}
TEST(CheckingNumberOfWords, TestNumberOfWords3){
    char* string = "       arrarara           1111       ";
    ASSERT_EQ(Task2(string), 1);
}
TEST(CheckingNumberOfWords, TestNumberOfWords4){
    char* string = "ffffff              131 213 124r3 f44              dsdad3232  aaaabbbb";
    ASSERT_EQ(Task2(string), 2);
}
TEST(CheckingNumberOfWords, TestNumberOfWords5){
    char* string = "15fffff 177 gvgg18 75rf*cfgxfdz%dxdf hhhh ufh12 uuuu 7778";
    ASSERT_EQ(Task2(string), 2);
}
TEST(CheckingNumberOfWords, TestNumberOfWords6){
    char* string = "766fgcdfgxgfg aavv tftdtr 765t ujhjjhvgvvghvhgh";
    ASSERT_EQ(Task2(string), 3);
}