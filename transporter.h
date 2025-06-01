#include <iostream>
#include <vector>

using namespace std;

template <typename T, typename U>
class items {
public:
    T x;
    U y;

    items(T a, U b) : x(a), y(b) {}

    void move() const {
        cout <<  x << " " << y  << endl;
    }
};

template <typename T>
class transporter {
private:
    vector<T> storage;

public:
    void load(const T& a) {
        storage.push_back(a);
    }

    void unload(size_t i) {
        if (i < storage.size()) {
            storage.erase(storage.begin() + i);
        }
        cout << "Item has left transporter" << endl;
    }
    void empty() {
        storage.clear();
        cout << "Transporter is now empty" << endl;
    }

    int addWeights() const {
        int totalWeight = 0;
        for (const auto& a : storage) {
            totalWeight += a.y;
        }
        return totalWeight;
    }

    void totalWeights() {
        cout << "Total Wieght: " << addWeights() << endl;
    }

    void move() const {
        for (const auto& item : storage) {
            item.move();
        }
        cout << "Transporter has arrived at its next destination" << endl;
        cout << endl;
    }
};
