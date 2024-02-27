#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
    double x, y;

    Point(double x, double y) : x(x), y(y) {}

    double distanceTo(const Point& other) const{
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }
};

int main(){
    Point p1(1, 2);
    Point p2(4, 6);

    cout << "a distancia entre os pontos e: " << p1.distanceTo(p2) << endl;

    Point p3(0, 0);
    Point p4(3, 4);
    cout << "caso de teste 1: a distancia entre os pontos e: " << p3.distanceTo(p4) << endl;

    Point p5(2, 3);
    Point p6(5, 7);
    cout << "caso de teste 2: a distancia entre os pontos e: " << p5.distanceTo(p6) << endl;

    Point p7(-1, -2);
    Point p8(-4, -6);
    cout << "caso de teste 3: a distancia entre os pontos e: " << p7.distanceTo(p8) << endl;

    return 0;
}