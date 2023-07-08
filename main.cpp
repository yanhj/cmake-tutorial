#include <iostream>
#include "version.h"

int main(int argc, char** argv) {
    std::cout << "Hello, World!" << std::endl;
    std::cout << VersionInfo::APP_VERSION_MAJOR << "."
    << VersionInfo::APP_VERSION_MINOR << "."
    << VersionInfo::APP_VERSION_PATCH
    << std::endl;
    return 0;
}