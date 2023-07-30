#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() ;

    std::cout << "Random number: " << randomNumber << std::endl;

    return 0;
}
