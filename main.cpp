#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <number of Fibonacci numbers>\n";
        return 1;
    }

    int limit = std::atoi(argv[1]);

    if (limit <= 0) {
        std::cerr << "Please enter a positive integer.\n";
        return 1;
    }

    int f0 = 0;
    int f1 = 1;

    for(int i = 0; i < limit; ++i) {
        if (i == 0)
            std::cout << f0 << " ";
        else if (i == 1)
            std::cout << f1 << " ";
        else {
            int next = f0 + f1;
            std::cout << next << " ";
            f0 = f1;
            f1 = next;
        }
    }

    std::cout << std::endl;
    return 0;
}