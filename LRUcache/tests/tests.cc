
#include "LRUcache.h"
#include <gteest/gtest.h>

int main() 
{
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

TEST(htab, create)
{
    lru_cache_t *lru = lru_create(10);    
}

