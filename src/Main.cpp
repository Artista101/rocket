#include "../include/canta.hpp"


int main(){
    
    
    int a;
    canta *c1=new canta;
    int choice;
    std::string question;
    std::cout<<"do you want to  add something to your bag? yes&no";
    std::cin>>question;
    if(question=="yes"){
    do
    {
        std::string thing;
        std::cout<<"please text something what you want to add to your bag";
        std::cin>>thing;
        c1->set_things(thing);
        std::cout<<"do you want to contunie ";
        std::cin>>question;
    } while (question=="yes");
    }
        std::cout<<"                                                    please select what you want to learn about your bag"<<std::endl;
        std::cout<<"                          1                                                             2                                                        3"<<std::endl;           
        std::cout<<"I want to learn how many things are there in my bag              I want to check whether my bag is empty or not               I want to learn what are there in my bag"<<std::endl;            
        std::cin>>choice;
        switch (choice)
        {
        case 1:
            std::cout<<c1->count();
            break;
        case 2:
        if(c1->query()){
                std::cout<<" empty";
            }
        else
        {
                std::cout<<"not empty";
        }
            break;
        case 3:
                c1->print_things();
            break;
        default:
            break;
        }

        std::cin>>a;
    return 0;
}