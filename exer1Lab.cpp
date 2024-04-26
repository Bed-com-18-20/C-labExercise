#include <iostream>

int main() {
    int dimension;
    
    // getting the dimensions
    std::cout << "Enter the dimension of the 2D array (not exceeding 3): ";
    std::cin >> dimension;
    
    // validating the  dimensions 
    while (dimension > 3) {
        std::cout << "Dimension cannot exceed 3. Please enter again: ";
        std::cin >> dimension;
    }
    
    // allocating a 2D array of doubles
    double** array = new double*[dimension];
    for (int i = 0; i < dimension; ++i) {
        array[i] = new double[dimension];
    }
    
    // Assigning values 
    for (int i = 0; i < dimension; ++i) {
        for (int j = 0; j < dimension; ++j) {
            std::cout << "Enter value for element [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }
    
    // displaying  the console
    std::cout << "Values of the 2D array:" << std::endl;
    for (int i = 0; i < dimension; ++i) {
        for (int j = 0; j < dimension; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    // deleting  memory for allocated array
    for (int i = 0; i < dimension; ++i) {
        delete[] array[i];
    }
    delete[] array;
    
    return 0;
}
