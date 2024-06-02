#ifndef DELIVERY_OPTIMIZER_H
#define DELIVERY_OPTIMIZER_H

#include "location.h"
#include "haversine.h"
#include <vector>
#include <algorithm>

class DeliveryOptimizer {
public:
    DeliveryOptimizer(const Location& start, const Location& r1, const Location& r2,
                      const Location& c1, const Location& c2, double pt1, double pt2)
        : start(start), r1(r1), r2(r2), c1(c1), c2(c2), pt1(pt1), pt2(pt2) {}

    double getOptimalTime() {
        double t1 = calculateRouteTime(start, r1, c1, r2, c2);
        double t2 = calculateRouteTime(start, r2, c2, r1, c1);
        return std::min(t1, t2);
    }

private:
    Location start, r1, r2, c1, c2;
    double pt1, pt2;

    double calculateRouteTime(const Location& start, const Location& firstRestaurant, const Location& firstConsumer,
                              const Location& secondRestaurant, const Location& secondConsumer) {
        double travelTime = 0.0;
        travelTime += getTravelTime(start, firstRestaurant);
        travelTime += (firstRestaurant == r1 ? pt1 : pt2) / 60.0; // Convert minutes to hours
        travelTime += getTravelTime(firstRestaurant, firstConsumer);
        travelTime += getTravelTime(firstConsumer, secondRestaurant);
        travelTime += (secondRestaurant == r1 ? pt1 : pt2) / 60.0; // Convert minutes to hours
        travelTime += getTravelTime(secondRestaurant, secondConsumer);
        return travelTime;
    }

    double getTravelTime(const Location& loc1, const Location& loc2) {
        double distance = Haversine::calculate(loc1.getLatitude(), loc1.getLongitude(),
                                               loc2.getLatitude(), loc2.getLongitude());
        return distance / 20.0; // Assuming 20 km/h speed
    }
};

#endif // DELIVERY_OPTIMIZER_H
