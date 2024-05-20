#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "main.cpp"

class CatMock : public Cat{};
class DogMock : public Dog{};
class BirdMock : public Bird{};


//First test
TEST(CatMock, Mock){
    CatMock cat("Louis");
    EXPECT_CALL(cat, name()).Times(1);
    EXPECT_EQ(cat.name(), "Louis");
}

//Second test
TEST(DogMock, Mock){
    DogMock dog("Frank");
    EXPECT_CALL(dog, name()).Times(1);
    EXPECT_EQ(dog.name(), "Frank");
}

//Third test
TEST(BirdMock, Mock){
    BirdMock bird("Adam");
    EXPECT_CALL(bird, name()).Times(1);
    EXPECT_EQ(bird.name(), "Adam");
}