// Created by markh on 1/17/2023. ID: 5814125

#ifndef PROJECT1_SEQUENCECLASS_H
#define PROJECT1_SEQUENCECLASS_H


/** A class that stores sequence data
 * @file SequenceClass.h
 * @author Mark Hentges
 * */

class SequenceClass {
private:
    int numbersInSequence;
    double lastNumberInSequence;
    double sequenceSum;
    double min;
    double max;
public:
    /** Default constructor for SequenceClass objects
     *
     * */
    SequenceClass();

    /** Reads in and calculuates data
     *@param newData is a data point in a sequence
     *@pre member variables initialized with constructor
     *@post if succesful all member variables will be updated
     * */
    void readInAndCalculateData(double newData);

    /** Gets size of sequence
     *@pre none
     *@post none
     *@return the number of elements in the sequence
     * */
    int getSequenceSize() const; //accessor method for total number of numbers in the sequence

    /** Finds the sum of the sequence
     *@pre none
     *@post none
     *@return the sum of elements in the sequence
     * */
    double getSequenceSum() const;

    /** finds the last value entered
     *@pre there needs to be at least one number entered
     *@post none
     *@return the last number entered in the sequence
     * */
    double getLastNumberInSequence() const;

    /** Divides sum by total elements
     *@pre there needs to be at least one number entered
     *@post none
     *@return the mean of the sequence
     * */
    double getMean() const;

    /** Finds smallest value in the sequence
     *@pre there needs to be at least one number entered
     *@post none
     *@return the minimum value in the sequence
     * */
    double getMin() const;

    /** Finds smallest value in the sequence
     *@pre there needs to be at least one number entered in the sequence
     *@post none
     *@return the maximum value in the sequence
     * */
    double getMax() const;

    /** Clears the sequence data to its default
     *@pre none
     *@post Clears the data
     *@return nothing
     * */
    void clearSequence();
};


#endif //PROJECT1_SEQUENCECLASS_H
