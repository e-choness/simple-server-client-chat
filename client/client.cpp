#include "hello.hpp"

int main(int argc, char **argv){

//    auto result = runSenderOnIPv6();
    auto result = runDnsResolver();

    return result == 0? EXIT_SUCCESS : EXIT_FAILURE;
}