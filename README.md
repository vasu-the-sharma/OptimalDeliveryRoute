# Overview:
This program helps a delivery executive named Aman to determine the optimal route to deliver two orders in the shortest possible time. The routes considered are:

Starting from Aman's location to Restaurant 1 (R1) -> Consumer 1 (C1) -> Restaurant 2 (R2) -> Consumer 2 (C2).
Starting from Aman's location to Restaurant 2 (R2) -> Consumer 2 (C2) -> Restaurant 1 (R1) -> Consumer 1 (C1).

# Assumptions:
Aman's, restaurants', and consumers' locations are represented using latitude and longitude.
The average speed is assumed to be 20 km/h.
Preparation times for the restaurants are given and assumed to be constant.
The Haversine formula is used to calculate the great-circle distance between points on the Earth's surface.
Preparation times for restaurants are added immediately upon reaching the restaurant.

# Compilation:
To compile and run the program, use the following commands:

sh
Copy code
g++ -o delivery main.cpp
./delivery
Test Cases
The main.cpp file contains test cases to validate the functionality of the delivery optimization logic. The test cases cover various scenarios such as basic example, same location for all points, large distances, zero preparation time, and negative coordinates.

Summary of Commands:

sh
Copy code
# Navigate to your project directory
cd path_to_directory

# Create project directory and navigate into it
mkdir OptimalDeliveryRoute
cd OptimalDeliveryRoute

# Initialize git repository
git init

# Create necessary files
touch README.md main.cpp location.h haversine.h delivery_optimizer.h

# Add your code to each file using your preferred text editor

# Add files to the staging area and commit them
git add .
git commit -m "Initial commit with project files"

# Add remote origin
git remote add origin https://github.com/YOUR_GITHUB_USERNAME/OptimalDeliveryRoute.git

# Push to GitHub
git branch -M main
git push -u origin main
