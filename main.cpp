#include "delivery_optimizer.h"
#include <iostream>
#include <cassert>

void runTests() {
    {
        // Test Case 1: Basic example
        Location amanLocation(12.9716, 77.5946); // Example location (Koramangala)
        Location r1(12.9352, 77.6245); // Restaurant 1
        Location r2(12.9279, 77.6271); // Restaurant 2
        Location c1(12.9344, 77.6101); // Consumer 1
        Location c2(12.9350, 77.6139); // Consumer 2
        double pt1 = 10.0; // Preparation time for R1 in minutes
        double pt2 = 12.0; // Preparation time for R2 in minutes

        DeliveryOptimizer optimizer(amanLocation, r1, r2, c1, c2, pt1, pt2);
        double optimalTime = optimizer.getOptimalTime();
        std::cout << "Test Case 1 Optimal delivery time: " << optimalTime << " hours" << std::endl;
        assert(optimalTime > 0); // Basic check to ensure the time is calculated
    }

    {
        // Test Case 2: Same location for restaurants and consumers
        Location amanLocation(12.9716, 77.5946); // Example location (Koramangala)
        Location r1(12.9716, 77.5946); // Restaurant 1
        Location r2(12.9716, 77.5946); // Restaurant 2
        Location c1(12.9716, 77.5946); // Consumer 1
        Location c2(12.9716, 77.5946); // Consumer 2
        double pt1 = 10.0; // Preparation time for R1 in minutes
        double pt2 = 12.0; // Preparation time for R2 in minutes

        DeliveryOptimizer optimizer(amanLocation, r1, r2, c1, c2, pt1, pt2);
        double optimalTime = optimizer.getOptimalTime();
        std::cout << "Test Case 2 Optimal delivery time: " << optimalTime << " hours" << std::endl;
        assert(optimalTime == (pt1 + pt2) / 60.0); // Only preparation time should be considered
    }

    {
        // Test Case 3: Large distances
        Location amanLocation(0.0, 0.0); // Example location
        Location r1(10.0, 10.0); // Restaurant 1
        Location r2(-10.0, -10.0); // Restaurant 2
        Location c1(20.0, 20.0); // Consumer 1
        Location c2(-20.0, -20.0); // Consumer 2
        double pt1 = 10.0; // Preparation time for R1 in minutes
        double pt2 = 12.0; // Preparation time for R2 in minutes

        DeliveryOptimizer optimizer(amanLocation, r1, r2, c1, c2, pt1, pt2);
        double optimalTime = optimizer.getOptimalTime();
        std::cout << "Test Case 3 Optimal delivery time: " << optimalTime << " hours" << std::endl;
        assert(optimalTime > 0); // Basic check to ensure the time is calculated
    }

    {
        // Test Case 4: Zero preparation time
        Location amanLocation(12.9716, 77.5946); // Example location (Koramangala)
        Location r1(12.9352, 77.6245); // Restaurant 1
        Location r2(12.9279, 77.6271); // Restaurant 2
        Location c1(12.9344, 77.6101); // Consumer 1
        Location c2(12.9350, 77.6139); // Consumer 2
        double pt1 = 0.0; // Preparation time for R1 in minutes
        double pt2 = 0.0; // Preparation time for R2 in minutes

        DeliveryOptimizer optimizer(amanLocation, r1, r2, c1, c2, pt1, pt2);
        double optimalTime = optimizer.getOptimalTime();
        std::cout << "Test Case 4 Optimal delivery time: " << optimalTime << " hours" << std::endl;
        assert(optimalTime > 0); // Basic check to ensure the time is calculated
    }

    {
        // Test Case 5: Negative coordinates
        Location amanLocation(-12.9716, -77.5946); // Example location (Koramangala)
        Location r1(-12.9352, -77.6245); // Restaurant 1
        Location r2(-12.9279, -77.6271); // Restaurant 2
        Location c1(-12.9344, -77.6101); // Consumer 1
        Location c2(-12.9350, -77.6139); // Consumer 2
        double pt1 = 10.0; // Preparation time for R1 in minutes
        double pt2 = 12.0; // Preparation time for R2 in minutes

        DeliveryOptimizer optimizer(amanLocation, r1, r2, c1, c2, pt1, pt2);
        double optimalTime = optimizer.getOptimalTime();
        std::cout << "Test Case 5 Optimal delivery time: " << optimalTime << " hours" << std::endl;
        assert(optimalTime > 0); // Basic check to ensure the time is calculated
    }
}

int main() {
    runTests();
    return 0;
}
