/* 
 * File:   Sort.cpp
 * Author: calc
 * 
 * Created on 25 июня 2014 г., 19:01
 */

#include <stdlib.h>
#include <iostream>

#include "Sort.h"

using namespace std;

Sort::Sort(int maxValue, int values) {
    this->maxValue = maxValue;
    this->values = values;
    
    //int a = new int[values];
    A = new int[values];
}


Sort::~Sort() {
    delete[] A;
}

void Sort::go() {
    fillArray();
    printArray();
    sortArray();
    print(testSort());
    printArray();
    print(counter);
}

void Sort::fillArray() {
    for (int i = 0; i < values; i++) {
        A[i] = getRandom();
    }
}

int Sort::getRandom() {
    return rand() % maxValue + 1;
}

void Sort::printArray() {
    if(values <= 20){
        for (int i = 0; i < values; i++) {
            std::cout << A[i] << "; ";
        }
        cout << endl;
    }
}

void Sort::sortArray() {

}

bool Sort::testSort() {

}

void Sort::print(int val) {
    cout << val << endl;
}

void Sort::print(bool val){
    cout << val << endl;
}
