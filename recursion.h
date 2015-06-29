

#ifndef RECURSION_H
#define	RECURSION_H

#include <exception>


class Recursion {
public :
    Recursion();            //Default Constructor
    void add_Integers();    // Inputs elements into array
    void print(int);        //Prints array backwards
    int get_size();         //Member function to get size of array
    void set_size(int);     //Member function to set size of array
    void findSmallest(int k, int first, int last);    //Finds kth smallest number of array
    int findLargest(int size);     //Finds Largest number in array using recursion
    void Quicksort_In(int, int);   //Quicksorts the array in Ascending order
    void Quicksort_De(int, int);   //Quicksorts the array in Descending order
    int partition(int, int);       //Called by Quicksort_De to partition the array. 
    
private:
    int myArray[100];  
    int mySize; 
   
};

#endif	/* RECURSION_H */
