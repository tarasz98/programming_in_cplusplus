#ifndef shapes_H_
#define shapes_H_

// Father class: Shape

class Shape {
public:

    //Constructor method
    Shape(double x, double y);

    //Implementation methods

    virtual double area();
    virtual double perimeter();
    virtual double height();
    virtual double width();
    virtual void rotate();
    virtual void display();



protected:
    double x, y;

};

// Sons classes: Rectangle, Square and Circle

class Rectangle: public Shape {
public:
    Rectangle(double x, double y);
    void display();
    void rotate();
    double width();
    double height();

private:
    double x, y;
};

class Square: public Shape {
public:
    Square(double l);
    double perimeter();
    double area();
    void display();

private:
    double l;
};

class Circle: public Shape {
public: 
    Circle(double r);
    double perimeter();
    double area();
    void display();
    double width();
    double height();
private:
    double r;
};


#endif /* shapes_H_ */