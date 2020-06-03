#include <cstdio>
#include <vector>
#include <string>
#include <unordered_set>
#include "Account.h"

using namespace std;

Account::Account() {
}

bool Account::isSubscribe(string stock) {
    return favors.end() != favors.find(stock);
}

vector<string> Account:: GetFavors() {
    vector<string> ret;

    for (auto stock : favors) {
        ret.push_back(stock);
    }

    return ret;
}

void Account:: Subscribe(vector<string>stocks) {
    for (auto stock : stocks) {
        if (!isSubscribe(stock)) {
            favors.insert(stock);
        }
    }
}
void Account:: Unsubscribe(std::vector<std::string> stocks) {
    for (auto stock : stocks) {
        if (isSubscribe(stock)) {
            favors.erase(stock);
        }
    }
}