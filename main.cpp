#include <vector>
#include "transporter.h"

using namespace std;

int main() {
    transporter<items<string, int>> bus;
    transporter<items<string, int>> train;

    bus.load(items<string, int>("Harry", 56));
    bus.load(items<string, int>("Barry", 81));
    bus.load(items<string, int>("Larry", 67));

    train.load(items<string, int>("Sandwich", 2));
    train.load(items<string, int>("HeavyMachine", 370));
    train.load(items<string, int>("Bicycle", 25));

    bus.move();

    bus.unload(1);
    bus.move();

    bus.empty();
    bus.move();

    train.move();

    train.totalWeights();
    train.move();

    train.unload(2);
    train.totalWeights();
    train.move();

    train.empty();
    train.totalWeights();
    train.move();

    return 0;
}
