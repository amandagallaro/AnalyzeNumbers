//
//  main.cpp
//  AnalyzeNumbers
//
/*
 -> Implement a function named 'initializeArray' which will store user's integer inputs into an array
 -> Implement a function named 'smallestValueOfArray' which is to find out the smallest value in an integer array provided as a parameter
 -> Implement a function named 'averageOfArray' which is to find out the average value in an integer array provided as a parameter
 -> Implement a function named 'lowerElementsOfArray' which is to find out the number of values in an integer array provided as a parameter, which is less than a value provided as a parameter
 -> Implement a function named 'upperElementsOfArray' which is to find out the number of values in an integer array provided as a parameter, which is above a value provided as a parameter
 -> Test the above functions in the main function:
    -> Read a list of 10 integer numbers from users
    -> Compute their smallest and average value
    -> Find out how many numbers are above the average and how many are below the average
*/
//  Created by Amanda Gallaro on 10/12/22.
//

#include <iostream>
using namespace std;

void initializeArray(int myArray[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter 10 numbers for the array: " << endl;
        cin >> myArray[i];
    }
}


double smallestValueOfArray(int myArray[], int size) {
    double smallest = myArray[0];
    for (int i = 1; i < size; i++) {
        if (myArray[i] < smallest) {
            smallest = myArray[i];
        }
    }
    return smallest;
}


double averageOfArray(int myArray[], int size) {
    double sum = 0;
    double average = 0;
    for (int i = 0; i < size; i++) {
        sum += myArray[i];
        
    }
    average = sum / size;
    return average;
}


void lowerElementsOfArray(int myArray[], int size, double average) {
    double lowerElements = 0;    //declaring a count variable for lower than average
    for (int i = 0; i < size; i++) {
            if (myArray[i] < average) {     //if the index of each element in the array is less than the average....
                lowerElements++;
            }
        }
    cout << lowerElements << endl;
}


void upperElementsOfArray(int myArray[], int size, double average) {
    double upperElements = 0;     //declaring a count variable for higher than average
    for (int i = 0; i < size; i++) {
            if (myArray[i] > average) {     //if the index of each element in the array is greater than the average....
                upperElements++;
            }
        }
    cout << upperElements << endl;
}


int main(int argc, const char * argv[]) {
    
    const int SIZE = 10;     //initializing the array to hold 10 elements
    int myArray[SIZE];   //the size of the array is stored into numbers

  
    initializeArray(myArray, SIZE);

    cout << "Smallest value in array: " << smallestValueOfArray(myArray, SIZE) << endl; //printing smallest value in array


    
    double average = averageOfArray(myArray, SIZE); //initializing average function
    
    cout << "Average of arrays: " << average << endl;


    cout << " Number of values that are less than the average in the array: " << endl;
    lowerElementsOfArray(myArray, SIZE, average);
    cout << endl;
  



    cout << "Number of values that are greater than the average in the array: " << endl;
    upperElementsOfArray(myArray, SIZE, average);
    cout << endl;
    
    
   
    
    return 0;
}
