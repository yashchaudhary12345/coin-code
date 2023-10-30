#include <stdio.h>
#include <math.h>

// Function to calculate the probability of getting heads or tails
double calculateProbability(int numCoins) {
    if (numCoins < 1) {
        return 0.0;
    }

    // Probability of getting either heads (0) or tails (1) on a single coin flip
    double probabilityOfSingleCoin = 0.5;

    // Probability of getting either heads or tails in 'numCoins' coin flips
    double totalProbability = 1.0;

    for (int i = 0; i < numCoins; i++) {
        totalProbability *= probabilityOfSingleCoin;
    }

    return totalProbability;
}

int main() {
    int numCoins;
    printf("Enter the number of coins: ");
    scanf("%d", &numCoins);

    if (numCoins < 0) {
        printf("Number of coins cannot be negative.\n");
    } else {
        double probability = calculateProbability(numCoins);
        printf("The probability of getting heads or tails in %d coin flips is: %lf\n", numCoins, probability);
    }

    return 0;
}
