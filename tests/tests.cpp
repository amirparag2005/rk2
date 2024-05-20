#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "main.cpp"

class CatMock : public Cat{
    MOCK_CONST_METHOD0(name, std::string());
};
class DogMock : public Dog{
    MOCK_CONST_METHOD0(name, std::string());
};
class BirdMock : public Bird{
    MOCK_CONST_METHOD0(name, std::string());
};


//First test
TEST(CatMock, Mock){
    CatMock cat;
    EXPECT_CALL(cat, name()).Times(1);
    EXPECT_EQ(cat.name(), "Cat");
}

//Second test
TEST(DogMock, Mock){
    DogMock dog;
    EXPECT_CALL(dog, name()).Times(1);
    EXPECT_EQ(dog.name(), "Dog");
}

//Third test
TEST(BirdMock, Mock){
    BirdMock bird;
    EXPECT_CALL(bird, name()).Times(1);
    EXPECT_EQ(bird.name(), "Bird");
}