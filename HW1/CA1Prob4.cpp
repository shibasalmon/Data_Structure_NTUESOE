#include <string>
using namespace std;

class flower {
    private:
        string name;
        int petal;
        double price;
    public:
        flower(string n, int pt, double pr);
        void setName(string n);
        void setPetal(int pt);
        void setPrice(double pr);
        string getName();
        int getPetal();
        double getPrice();
};

flower::flower(string n, int pt, double pr) {

}

void flower::setName(string n) {
    this->name = n;
}

void flower::setPetal(int pt) {
    this->petal = pt;
}

void flower::setPrice(double pr) {
    this->price = pr;
}

string flower::getName() {
    return this->name;
}

int flower::getPetal() {
    return this->petal;
}

double flower::getPrice() {
    return this->price;
}