#include <cmath>

#include <Point.hpp>

void Point::Rotate(int angle) {
    static const double pi{3.1415926535897};
    double radians{angle * pi/180};
    double cos_angle{cos(radians)};
    double sin_angle{sin(radians)};

    double x{static_cast<double>(mX)};
    double y{static_cast<double>(mY)};
    mX = x * cos_angle - y * sin_angle;
    mY = x * sin_angle + y * cos_angle;
}

Point operator+ (const Point& p, const Point& q) {
    return Point(p.mX + q.mX, p.mY + q.mY);
}


Point operator- (const Point& p, const Point& q) {
    return Point(p.mX - q.mX, p.mY - q.mY);
}

