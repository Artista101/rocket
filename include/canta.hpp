#ifndef CANTA_HPP
#define CANTA_HPP

#include<iostream>
#include<vector>
#include<string>


class canta{



public:

canta();
static void set_things(std::string thing1);
static std::vector<std::string> get_property();
static int count();
static bool query();
static void print_things();


private:
 static std::vector<std::string> property;
};


#endif