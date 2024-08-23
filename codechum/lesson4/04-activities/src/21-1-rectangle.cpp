class Rectangle {
public:
    double length;
    double width;
    
    Rectangle(double len = 1.0, double wid = 1.0) : length(len), width(wid) {}
    
    double getArea() {
        return length * width;
    }
    
    double getLength() {
        return length;
    }
    
    double getWidth() {
        return width;
    }
};