#include <gtest/gtest.h>
#include "test001/example.h"

TEST(ExampleTest, ExampleWorks) {
    // Test the library function
    EXPECT_NO_THROW(example());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
