//
// Created by mnaffeti on 17/10/2023.
//

#include <iostream>
#include "../Headers/Product.h"

void Product::listparts() const {
    std::cout<<"product parts " ;
    for(size_t i =0;i<parts.size();i++){
        if(parts[i]==parts.back()){std::cout<<parts[i] ; }
        else
        {
            std::cout<<parts[i]<<"," ;
        }
    }
    std::cout<<"\n\n" ;


}