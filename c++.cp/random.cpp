#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL)); // Seed the random number generator
    int randomNumber = rand(); // Generate a random number
    std::cout << "Random number: " << randomNumber << std::endl;
    return 0;
}