#pragma once
#include <cassert>
#include "task2.h"

void test_func_1(){
    int num = Task2("-25,00144555");
    assert(num == 1);
}
void test_func_2(){
    int num = Task2("-222+333+11*4444");
    assert(num == 0);
}
void test_func_3(){
    int num = Task2("       arrarara           1111       ");
    assert(num == 1);
}
void test_func_4(){
    int num = Task2("ffffff              131 213 124r3 f44              dsdad3232  aaaabbbb");
    assert(num == 2);
}
void test_func_5(){
    int num = Task2("15fffff 177 gvgg18 75rf*cfgxfdz%dxdf hhhh ufh12 uuuu 7778");
    assert(num == 2);
}
void test_func_6(){
    int num = Task2("766fgcdfgxgfg aavv tftdtr 765t ujhjjhvgvvghvhgh");
    assert(num == 3);
}
void run_tests(){
    test_func_1();
    test_func_2();
    test_func_3();
    test_func_4();
    test_func_5();
    test_func_6();
}