#include "loadtxt.hpp"

using namespace std;

int main() {
    auto fname = "data.txt";
    auto data = loadtxt(fname).skiprows(0).comments("#").call();

    cout << "done reading!" << endl;
    return 0;
}