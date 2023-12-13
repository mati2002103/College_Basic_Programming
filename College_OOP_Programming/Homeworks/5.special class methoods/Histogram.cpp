#include <iostream>
#include <cstdlib>
#include <cstring>

class Histogram {
private:
    int* bins;
    int numBins;

public:
    int size() const;
    friend std::ostream& operator<<(std::ostream& s, const Histogram& h);
    const int& operator[](int index) const;
    Histogram();
    Histogram(const Histogram& other);
    Histogram(double start, double end, int num);
    Histogram& operator=(const Histogram& other); 
    ~Histogram();
    Histogram& insert(double value);
};

Histogram::Histogram() : bins(nullptr), numBins(0) {}

Histogram::Histogram(const Histogram& other) : numBins(other.numBins) {
    bins = new int[numBins];
    for (int i = 0; i < numBins; ++i) {
        bins[i] = other.bins[i];
    }}

const int& Histogram::operator[](int index) const {
    return bins[index];
}

Histogram::Histogram(double start, double end, int num) : bins(new int[num]), numBins(num) {
    for (int i = 0; i < num; ++i) {
        bins[i] = 0;
    }
}

Histogram& Histogram::operator=(const Histogram& other) {
     if (this != &other) {
        delete[] bins;

        numBins = other.numBins;
        bins = new int[numBins];
        for (int i = 0; i < numBins; ++i) {
            bins[i] = other.bins[i];
        }
    }

    return *this;
}

int Histogram::size() const { 
    return numBins;
}

Histogram::~Histogram() {
    delete[] bins;
    numBins = 0;
}

std::ostream& operator<<(std::ostream& s, const Histogram& h) {
    for (int i = 0; i < h.size(); ++i) {
        s << h[i] << " ";
    }
    return s;
}

Histogram& Histogram::insert(double value) {
   if (value >= 0 && value < 1) {
        int binIndex = int(value * numBins);
        ++bins[binIndex];
    }

    return *this;
}

int main() {
    Histogram h1(0., 1., 2);
    Histogram h2;
    h1.insert(0.17);
    (h2 = h1).insert(0.75);
    const Histogram h3 = Histogram(h2).insert(0.33);
    std::cout << h1 << std::endl << h2 << std::endl << h3 << std::endl;
    return 0;
}
