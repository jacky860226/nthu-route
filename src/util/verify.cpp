#include <string>
#include "verifier.h"

using namespace std;

int main (const int argc, const char* argv[]) {
    string inputFileName = "input.txt";
    string outputFileName = "output.txt";

    switch (argc) {
        case 3:
            outputFileName = argv[2];
        case 2:
            inputFileName = argv[1];
        case 1:
        default:
            break;
    }

    Verifier verifier(inputFileName.c_str(), outputFileName.c_str());
    verifier.verify();

    return 0;
}
