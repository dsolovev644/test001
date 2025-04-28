#include <iostream>
#include "test001/example.h"

#include <boost/filesystem.hpp>
#include <spdlog/spdlog.h>

int main() {
    std::cout << "Hello, Modern C++2!\n";
    example();

    boost::filesystem::path p{"."};
    spdlog::info("Current directory is {}", p.string());
    return 0;
}
