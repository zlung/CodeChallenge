#include "gtest/gtest.h"
#include "Account.h"

TEST(SubscribeTest, test1) {
    Account acc = Account();
    std::vector<std::string> lists({"stocks1", "stock2", "stock3"});
    acc.Subscribe(lists);
    std::vector<std::string> stocks = acc.GetFavors();

    int n = lists.size();
    int m = stocks.size();

    EXPECT_EQ(n, m);

    for (int i = 0; i < n; ++i) {
        EXPECT_TRUE(acc.isSubscribe(lists[i]));
    }
}

TEST(UnsubscribeTest, test2) {
    Account acc = Account();
    std::vector<std::string> like({"stock1", "stock2", "stock3"});
    std::vector<std::string> unlike({"stock2", "stock3", "stock4"});
    acc.Subscribe(like);
    acc.Unsubscribe(unlike);
    std::vector<std::string> stocks = acc.GetFavors();

    int n = stocks.size();
    int m = 1;

    EXPECT_EQ(n, m);
    EXPECT_TRUE(acc.isSubscribe("stock1"));
}