//
//  CPlusTest.hpp
//  CPlusTest
//
//  Created by Tu Che on 11/03/2024.
//

#ifndef CPlusTest_hpp
#define CPlusTest_hpp

#include <stdio.h>

class CPlusTest {
private:
    char* name;
    int age;
public:
    // Constructor and Destructor
    CPlusTest(const char* name, int age);
    ~CPlusTest();
    
    void setName(const char* name);
    const char* getName() const;
    
    void setAge(int age);
    int getAge() const;
};

#endif /* CPlusTest_hpp */
