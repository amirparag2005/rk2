#pragma once

#include <map>
#include <memory>
#include <string>
#include <typeindex>
#include <typeinfo>

struct IAnimal {
    virtual std::string name() const = 0;
    virtual ~IAnimal() = default;
};

using FPTR = void (*)(const IAnimal&, const IAnimal&);
using PLAY_MAP = std::map<std::pair<std::type_index, std::type_index>, FPTR>;

PLAY_MAP play_map; // dispatching function map

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

void populate_play_map();

void play(const IAnimal&, const IAnimal&);
