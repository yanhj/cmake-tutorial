#include <iostream>
#include "version.h"

int main(int argc, char** argv) {
    std::cout << "Hello, World!" << std::endl;
    std::cout << VersionInfo::APP_VERSION_MAJOR << std::endl;
    return 0;
}