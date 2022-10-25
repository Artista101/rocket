#include "../include/canta.hpp"



canta::canta(){

}
std::vector<std::string> canta::property={};

std::vector<std::string> canta::get_property(){
return property;
}


 void canta::set_things(std::string thing1){
    property.push_back(thing1);
}


 int canta::count(){
    int counter;
    counter=canta::get_property().size();
    return counter;
}
 bool canta::query()
{
property.empty();
}
 void canta::print_things(){
    for(int i=0;i<property.size();i++){
    std::cout<<property[i]<<std::endl;
    }
}
