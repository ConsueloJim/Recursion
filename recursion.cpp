#include <exception>
#include <iostream>
#include <cstdlib>
#include "recursion.h"


using namespace std;

 //Default Constructor, initializes all elements of myArray to zero. 
 Recursion::Recursion() {  
     for(int i=0; i<10; i++){
         myArray[i] = 0;
     }
 }
 //Sets size of array
 void Recursion::set_size(int size){
       mySize = size; 
 }
 //Gets size of array
 int  Recursion::get_size(){
     return mySize; 
 }
 //Gets values of array from user, called in main. 
 void Recursion::add_Integers( ){
     cout<< "Please enter the values of the array separated by spaces: " ;
     for(int i=0; i< mySize; i++){
         cin >> myArray[i]; 
     }
 }
 //Prints the array backwards from input 
 void Recursion::print(int size){
     if (size > 0) {
         cout << myArray[size-1] << " "; 
         print(size-1);
     }  
 }
 //Finds the kth smallest number in myArray
 void Recursion::findSmallest(int k, int first, int last ){
    int i, j, pivotitem, temp; 
    int pivotindex = first; 
     
     pivotitem = myArray[first];
     j=first;
     
     for(i=first+1; i<=last; i++) {
         
         if(myArray[i]<pivotitem) {
             j++;
             temp = myArray[i];
             myArray[i] = myArray[j];
             myArray[j] = temp;
         }
         pivotindex = j;
         temp = myArray[first];
         myArray[first] = myArray[pivotindex];
         myArray[pivotindex] = temp; 
     } 
     
     if(k < pivotindex-first + 1){
         findSmallest(k, first, pivotindex-1);
     }
     else if(k == pivotindex-first+1){
         cout << "The number is : "<< pivotitem << endl;
     }
     else {
         cin.get();
         findSmallest(k-(pivotindex-first+1), pivotindex+1, last);
     }
 }
    
 int Recursion::findLargest(int size) {

     if(size == 1) {
         return myArray[0];
     } else {
         if(findLargest(size-1) > myArray[size-1])
             return findLargest(size-1);
         else 
            return myArray[size-1]; 
     }
}

 void Recursion::Quicksort_In(int top, int bottom){
     int p, temp;
     if( top < bottom) {
         p = myArray[top];
         int i = top;
         int j = bottom;
         
         while(i<j){
             while (myArray[i] <= p && i<j)
                 i++;
                 while(myArray[j]>p && i<=j)
                     j--;
                 if(i<=j){
                    temp =myArray[i];
                    myArray[i]=myArray[j];
                    myArray[j] = temp;
                 }
         }
            temp=myArray[j];
            myArray[j] = myArray[top];
            myArray[top] = temp; 
            
            for(i=0; i<mySize; i++){
                 cout << myArray[i]<< " ";
             }
            cout << endl;
           
            Quicksort_In(top, j-1);
            Quicksort_In(j+1, bottom);       
     }
 }
     
 void Recursion::Quicksort_De(int top, int bottom){
     int middle; 
     if(top<bottom){
         middle = partition(top, bottom);
         Quicksort_De(top, middle);
         Quicksort_De(middle+1, bottom);
         
     }
        for(int i=0; i<mySize; i++){
             cout << myArray[i] << " ";
        }
        cout << endl;
     return; 
   }
 
 int Recursion::partition(int top, int bottom){
 
     int x = myArray[top];
     int i = top-1;
     int j = bottom+1;
     int temp;
     do {
         do{
             j--;
         } while(x > myArray[j]);
         do{
             i++;
         } while(x < myArray[i]);
         
         if(i<j){
             temp = myArray[i];
             myArray[i] = myArray[j];
             myArray[j] = temp;
         }
     } while(i<j);
     return j; 
 }
 
