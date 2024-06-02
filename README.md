# Overview:
OptimalDeliveryRoute is a C++ project designed to help a delivery executive, Aman, determine the best route to deliver a batch of orders in the shortest possible time. The program uses the Haversine formula to calculate the shortest distances between multiple geo-locations and determines the optimal delivery sequence.

This program helps a delivery executive, named Aman, to determine the optimal route to deliver two orders in the shortest possible time. The routes considered are:

Starting from Aman's location to Restaurant 1 (R1) -> Consumer 1 (C1) -> Restaurant 2 (R2) -> Consumer 2 (C2).
Starting from Aman's location to Restaurant 2 (R2) -> Consumer 2 (C2) -> Restaurant 1 (R1) -> Consumer 1 (C1).


# Project Structure and Files:
OptimalDeliveryRoute/

├── README.md

├── main.cpp

├── location.h

├── haversine.h

├── delivery_optimizer.h

# Features:
Location Handling: Represents geo-locations (latitude and longitude) for the starting point, restaurants, and consumers.

Haversine Formula: Calculates the great-circle distance between points on the Earth's surface using their latitude and longitude.

Optimal Route Calculation: Computes the total time taken for various delivery routes and selects the one with the shortest time.

Modular Design: The project is structured into multiple header files, promoting code reusability and readability.

# Assumptions:
Aman's, restaurants', and consumers' locations are represented using latitude and longitude.
The average speed is assumed to be 20 km/h.
Preparation times for the restaurants are given and assumed to be constant.
The Haversine formula is used to calculate the great-circle distance between points on the Earth's surface.
Preparation times for restaurants are added immediately upon reaching the restaurant.

# Test Cases:
The main.cpp file contains test cases to validate the functionality of the delivery optimization logic. The test cases cover various scenarios such as basic example, same location for all points, large distances, zero preparation time, and negative coordinates.
