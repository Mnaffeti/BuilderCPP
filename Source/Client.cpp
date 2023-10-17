//
// Created by mnaffeti on 17/10/2023.
//

#include "Client.h"
#include "../Headers/ConcreteBuilder.h"

void Client:: ClientCode(Orchestor &orchestor) {
    ConcreteBuilder* builder = new ConcreteBuilder();
    orchestor.set_builder(builder) ;
    orchestor.BuildProduct() ;
    Product *p =builder->getProduct();
    p->listparts() ;
    delete p ;
    /////for the full featured
    orchestor.BuildFeaturedProduct() ;
    p=builder->getProduct() ;
    p->listparts() ;
    delete p ;

}
