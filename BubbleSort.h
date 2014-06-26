/* 
 * File:   BubbleSort.h
 * Author: calc
 *
 * Created on 26 июня 2014 г., 9:37
 */

#ifndef BUBBLESORT_H
#define	BUBBLESORT_H

#include "Sort.h"


class BubbleSort : public Sort {
    void swap(int &a, int &b);
public:
    /*BubbleSort();
    BubbleSort(const BubbleSort& orig);
    virtual ~BubbleSort();*/

    virtual void sortArray();
};

#endif	/* BUBBLESORT_H */

