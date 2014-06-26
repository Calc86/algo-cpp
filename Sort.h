/* 
 * File:   Sort.h
 * Author: calc
 *
 * Created on 25 июня 2014 г., 19:01
 */

#ifndef SORT_H
#define	SORT_H

class Sort {
protected:
    int counter = 0;
    int maxValue = 0;
    int values = 0;
    int *A;
public:
    //Sort();
    //Sort(const Sort& orig);
    Sort(int maxValue = Sort::MAX_VALUE, int values = Sort::VALUES);
    virtual ~Sort();
    
    void go();
    void printArray();
    void fillArray();
    int getRandom();
    virtual void sortArray() = 0;
    bool testSort();
    void print(int val);
    void print(bool val);
private:
    static const int MAX_VALUE = 100;
    static const int VALUES = 10;
};

#endif	/* SORT_H */

