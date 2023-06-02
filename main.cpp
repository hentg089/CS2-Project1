// Created by markh on 1/17/2023. ID: 5814125

#include <iostream>
#include "SequenceClass.h"



int main() {
    //default data
    int doNext = 0;
    double newDataPoint;
    SequenceClass sequence;

    //loop for adding in data and stuff
    do{
        switch(doNext){
            case 0:
                std::cout << "Enter the data point: \n";
                std::cin >> newDataPoint;
                sequence.readInAndCalculateData(newDataPoint);
                break;
            case 1:
                std::cout << "Sequence statistics:\n";
                std::cout << "\t" << sequence.getSequenceSize() << " is the sequence size\n";
                std::cout << "\t" << sequence.getSequenceSum() << " is the sum of all the elements in the sequence\n";
                std::cout << "\t" << sequence.getLastNumberInSequence() << " is the last number in sequence\n";
                std::cout << "\t" << sequence.getMean() << " is the sequence mean\n";
                std::cout << "\t" << sequence.getMin() << " is the minimum number in sequence\n";
                std::cout << "\t" << sequence.getMax() << " is the maximum number in sequence\n";
                break;
            case 2:
                sequence.clearSequence();
                break;
        }
        std::cout << "what do you want to do next?\n";
        std::cout << "\t(0) enter another data point\n";
        std::cout << "\t(1) get sequence statistics\n";
        std::cout << "\t(2) clear the sequence\n";
        std::cout << "\t(any other number) end the program\n";
        std::cin >> doNext;

    }while(doNext == 0 || doNext == 1 || doNext == 2);


    return 0;
}
