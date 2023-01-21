//
// Created by Kiwan Hyun on 2023/01/20.
//

#ifndef FINM32600_W23_WEEK3_CIRCLE_H
#define FINM32600_W23_WEEK3_CIRCLE_H
class Circle
{
public:
    Circle(); // default constructor
    Circle(double center_x, double center_y, double radius); // overload constructor
    ~Circle(); // destructor

    double GetArea(); // getting the area of the circle
    double GetCircumference(); //getting the circumference of the circle

    void SetRadius(double radius); // setting the radius
    void SetCenter(double center_x, double center_y); // setting the center

private:
    double radius_;
    double center_x_;
    double center_y_;
};
#endif //FINM32600_W23_WEEK3_CIRCLE_H
