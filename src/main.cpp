#include <cstdio>
#include "Account.h"

using namespace std;

int main(int argc, char** argv) {
    Account acc = Account();
    std::vector<std::string> lists({"stock1", "stock2", "stock3"});
    acc.Subscribe(lists);
    return 0;
}