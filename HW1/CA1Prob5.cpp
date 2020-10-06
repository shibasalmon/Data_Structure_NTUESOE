class rectangle {
    private:
        double width;
        double length;
        double perimeter;
        double area;

    public:
        rectangle(double wd, double lg);
        void setDimension(double wd, double lg);
        void setWidth(double wd);
        void setLength(double lg);
        double getWidth();
        double getLength();
        double getPerimeter();
        double getArea();
        bool isSquare();
};

rectangle::rectangle(double wd, double lg) {
    this->width = wd;
    this->length = lg;
    this->perimeter = 2 * ( this->width + this->length );
    this->area = this->width * this->length;
}

void rectangle::setDimension(double wd, double lg) {
    this->width = wd;
    this->length = lg;
    this->perimeter = 2 * ( this->width + this->length );
    this->area = this->width * this->length;
}

void rectangle::setWidth(double wd) {
    this->width = wd;
    this->perimeter = 2 * ( this->width + this->length );
    this->area = this->width * this->length;
}

void rectangle::setLength(double lg) {
    this->length = lg;
    this->perimeter = 2 * ( this->width + this->length );
    this->area = this->width * this->length;
}

double rectangle::getWidth() {
    return this->width;
}

double rectangle::getLength() {
    return this->length;
}

double rectangle::getPerimeter() {
    return perimeter;
}

double rectangle::getArea() {
    return this->area;
}

bool rectangle::isSquare() {
    return this->width == this->length ? true : false;
}