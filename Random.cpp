#include "Random.h"

Random::Random() {
    std::random_device rd; // Obtain a random number from hardware
    m_rng.seed(rd()); // Seed the Mersenne Twister engine
}

int Random::getRandomNumber(int min, int max) {
    std::uniform_int_distribution<int> dist(min, max); // Define the distribution
    return dist(m_rng); // Generate random number within the range
}