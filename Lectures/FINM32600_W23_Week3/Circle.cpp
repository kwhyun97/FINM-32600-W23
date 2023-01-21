//
// Created by Kiwan Hyun on 2023/01/20.
//

#include "Circle.h"

Circle::Circle()
        : center_x_(0.0),
        center_y_(0.0),
        radius_(0.0)
{
}

Circle::Circle(double center_x, double center_y, double radius)
        : center_x_(center_x),
        center_y_(center_y),
        radius_(radius)
{
}

Circle::~Circle()
{
}

void Circle::SetRadius(double radius)
{
    radius_ = radius;
}

void Circle::SetCenter(double center_x, double center_y)
{
    center_x_ = center_x;
    center_y_ = center_y;
}

double Circle::GetArea()
{
    return 3.14 * radius_ * radius_; // approximating \pi as 3.14
}

double Circle::GetCircumference()
{
    return 3.14 * 2 * radius_; // approximating \pi as 3.14
}