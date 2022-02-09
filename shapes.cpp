#include <iostream>
#include <string>
#include <cmath>
#include "shapes.h"

using namespace std;

// SHAPE GENERAL METHODS

//-Constructor

Shape::Shape(double x, double y){
    this->x = x;
    this->y = y;
}

//-Area
double Shape::area(){
    double a;
    a = x*y;

    return a;
}
//-Perimeter
double Shape::perimeter(){
    double p;

    p = 2*x + 2*y;

    return p;
}

//-Height
double Shape::height(){
    return x;
}

//-Width
double Shape::width(){
    return y;
}

//-Rotate
void Shape::rotate(){
    double temp;
    temp = x;
    this->x = y;
    this->y = temp;
}

//-Display
void Shape::display(){
    cout << "x: " << x << " " << "y: "<< y << endl; 
}

// RECTANGLE METHODS

//-Constructor
Rectangle::Rectangle(double x, double y) : Shape(x, y) {
    this -> x = x;
    this -> y = y;
}

//-Display
void Rectangle::display(){
    cout << "x: " << x << " " << "y: "<< y << endl; 
}

//-Rotate
void Rectangle::rotate(){
    double temp;
    temp = x;
    this->x = y;
    this->y = temp;
}

//-Height
double Rectangle::height(){
    return x;
}

//-Width
double Rectangle::width(){
    return y;
}

// SQUARE METHODS

//-Constructor
Square::Square(double x) : Shape(x, y){
    this -> l = x;
    this -> y = l;
}

//-Area
double Square::area() {
    double a;
    a = l*l;

    return a;
}

//-Perimeter
double Square::perimeter() {
    double p;
    p = 4*l;

    return p;
}

//-Display
void Square::display(){
    cout << "l: " << l << endl; 
}


// CIRCLE METHODS

//-Constructor
Circle::Circle(double x) : Shape(x,y){
    this->r = x;
    this->y = r;
}

//-Area
double Circle::area(){
    double a;
    a = M_PI*r*r;

    return a;
}

//-Perimeter
double Circle::perimeter(){
    double p;
    p = 2*M_PI*r;

    return p;
}

//-Display
void Circle::display(){
    cout << "r: " << r << endl; 
}

//-Height
double Circle::height(){
    return 2*x;
}

//-Width
double Circle::width(){
    return 2*y;
}
