#ifndef __CODECHALLENGE_ACCOUNT_H__
#define __CODECHALLENGE_ACCOUNT_H__

#include <string>
#include <vector>
#include <unordered_set>

class Account {
private:
    // subscribe list
    std::unordered_set<std::string> favors;
public:
    // create an account without subscribe
    Account();

    // create an account with subscribe
    Account(std::vector<std::string> list);

    // return subscribe list
    std::vector<std::string> GetFavors();

    // check if in subscribe list
    bool isSubscribe(std::string stock);
    
    // add in favors
    void Subscribe(std::vector<std::string> stocks);
    
    // remove from favors
    void Unsubscribe(std::vector<std::string> stocks);

    // read data, input the pointer
    std::vector<std::string> load(void* ptr);
};

#endif //__CODECHALLENGE_ACCOUNT_H__