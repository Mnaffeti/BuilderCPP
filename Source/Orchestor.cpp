//
// Created by mnaffeti on 17/10/2023.
//

#include "../Headers/Orchestor.h"

void Orchestor::set_builder(Builder *builder) {
    this->builder=builder ;

}
void Orchestor::BuildProduct() {
    this->builder->ProducePartA() ;
}
void Orchestor::BuildFeaturedProduct() {
    this->builder->ProducePartA() ;
    this->builder->ProducePartB() ;
    this->builder->ProducePartC() ;


    }

