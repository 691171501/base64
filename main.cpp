#include <iostream>
#include "base64_lib/lib.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    auto ret = filetoBase64("/home/jingzheng/work_project/test_tmp.tar.gz", "out");
    ret = base64ToFile("out", "source.tar.gz");
    return 0;
}