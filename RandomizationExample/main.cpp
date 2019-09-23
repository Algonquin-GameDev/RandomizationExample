#include <iostream>
#include <random>

std::random_device seed;
std::mt19937 mersenneTwister(seed());

int RandomInt(int min, int max);

int main()
{
    std::cout << RandomInt(1, 100) << std::endl;
    return 0;
}

int RandomInt(int min, int max)
{
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(mersenneTwister);
}

