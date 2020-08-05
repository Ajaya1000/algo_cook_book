#include<iostream>
#include "Line.h"
#include "Drawable.h"
Line:: Line()
{
    std::cout<<"Line created\n";
}
//Line::draw(){
//    std::cout<<"A line drawed!!\n";
//    }
Line:: ~Line()
{
    std::cout<<"Line destroyed\n";
}

