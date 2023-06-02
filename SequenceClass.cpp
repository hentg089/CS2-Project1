// Created by markh on 1/17/2023. ID: 5814125
//

#include "SequenceClass.h"
#include <cfloat>

SequenceClass::SequenceClass() : numbersInSequence(0), lastNumberInSequence(0),
                                sequenceSum(0), min(DBL_MAX), max(DBL_MAX*-1){

}

void SequenceClass::readInAndCalculateData(double newData)  {
    numbersInSequence++;
    lastNumberInSequence = newData;
    sequenceSum += newData;

    if(newData < min) min = newData;
    if(newData > max) max = newData;
}

int SequenceClass::getSequenceSize() const {
    return numbersInSequence;
}

double SequenceClass::getSequenceSum() const {
    return sequenceSum;
}

double SequenceClass::getLastNumberInSequence() const {
    return lastNumberInSequence;
}

double SequenceClass::getMean() const {
    return sequenceSum/numbersInSequence;
}

double SequenceClass::getMin() const {
    return min;
}

double SequenceClass::getMax() const{
    return max;
}

void SequenceClass::clearSequence() {
    numbersInSequence = 0;
    lastNumberInSequence = 0;
    sequenceSum = 0;
    min = DBL_MAX;
    max = DBL_MIN;
}
