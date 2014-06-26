/* 
 * File:   main.cpp
 * Author: calc
 *
 * Created on 25 июня 2014 г., 19:00
 */

#include <cstdlib>
#include <iostream>

#include "BubbleSort.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    std::cout << "123456" << std::endl;
    Sort* s = new BubbleSort();
    s->go();
    return 0;
}

