/*******************************************************************************
 *       Name: Consuelo Jimenez
 *      Class: CSC340
 * Assignment: Recursion / Complexity Analysis 
 *      Date : 04/29/2015
 ******************************************************************************/

#include <cstdlib>
#include <exception>
#include <iostream>
#include <cstdlib>
#include "recursion.h"


using namespace std;

int main(){
    int size = 0; 
    int k = 0;
    Recursion array1; 
    cout << "Enter the size of the array: ";
    cin >> size;
    array1.set_size(size); 
    cout<< "The size of the array is " << array1.get_size() << endl;
    cout<<endl;
    array1.add_Integers(); 
    cout << endl << endl;
    cout << "The reverse array is: " << endl;
    array1.print(size); 
    cout << endl << endl; 
    cout << "The Largest number is : " << array1.findLargest(size); 
    cout << endl << endl; 
    cout << "Please choose the kth smallest number to find: ";
    cin >> k; 
    array1.findSmallest(k, 0, size-1);
    cout << endl;
    cout << "Sorting array in Ascending order..." << endl;
    array1.Quicksort_In(0, size-1);
    cout << endl;
    cout<< "Sorting array in Descending order..." << endl;
    array1.Quicksort_De(0, size-1);
   
    
  
    

 
}
