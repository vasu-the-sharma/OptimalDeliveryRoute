#ifndef HAVERSINE_H
#define HAVERSINE_H

#include <cmath>

class Haversine {

public:
    static double calculate(double lat1, double lon1, double lat2, double lon2) {
        static const double R = 6371.0; // Earth's radius in km
        double dLat = toRadians(lat2 - lat1);
        double dLon = toRadians(lon2 - lon1);
        lat1 = toRadians(lat1);
        lat2 = toRadians(lat2);

        double a = std::sin(dLat / 2) * std::sin(dLat / 2) +
                   std::sin(dLon / 2) * std::sin(dLon / 2) * std::cos(lat1) * std::cos(lat2);
        double c = 2 * std::atan2(std::sqrt(a), std::sqrt(1 - a));

        return R * c; // Distance in km
    }

private:
    static double toRadians(double degree) {
        return degree * M_PI / 180.0;
    }
};

#endif // HAVERSINE_H
