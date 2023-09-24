#ifndef cylinder_h
#define cylinder_h
class Cylinder{
    private :

    double radius;
    double height;

    public :

    Cylinder();
    Cylinder(double radius, double height);

    double getRadius();

    double getHeight();
    
    void setRadius(double radius);
    
    void setHeight(double height);

    double calculateVolume();

    void printVolume();
};

#endif