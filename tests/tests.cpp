#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "main.cpp"

class Cat : public IAnimal {
  public:
    std::string name() const override { return "Cat"; }
};
class Dog : public IAnimal {
  public:
    std::string name() const override { return "Dog"; }
};
class Bird : public IAnimal {
  public:
    std::string name() const override { return "Bird"; }
};

class CatMock : public Cat{
    public:
    MOCK_CONST_METHOD0(name, std::string());
};
class DogMock : public Dog{
    public:
    MOCK_CONST_METHOD0(name, std::string());
};
class BirdMock : public Bird{
    public:
    MOCK_CONST_METHOD0(name, std::string());
};


//First test
TEST(CatMock, Mock){
    CatMock cat;
    EXPECT_CALL(cat, name()).Times(1);
    cat.name();
}

//Second test
TEST(DogMock, Mock){
    DogMock dog;
    EXPECT_CALL(dog, name()).Times(1);
    dog.name();
}

//Third test
TEST(BirdMock, Mock){
    BirdMock bird;
    EXPECT_CALL(bird, name()).Times(1);
    bird.name();
}
