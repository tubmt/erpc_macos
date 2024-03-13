//
//  CPlusTest.cpp
//  CPlusTest
//
//  Created by Tu Che on 11/03/2024.
//

#include "CPlusTest.hpp"
#include "string.h"

CPlusTest::CPlusTest(const char* name, int age) : age(age) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

CPlusTest::~CPlusTest() {
    delete[] name;
}

void CPlusTest::setName(const char* name) {
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

const char* CPlusTest::getName() const {
    return name;
}

void CPlusTest::setAge(int age) {
    this->age = age;
}

int CPlusTest::getAge() const {
    return age;
}
