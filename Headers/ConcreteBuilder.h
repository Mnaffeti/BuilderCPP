//
// Created by mnaffeti on 17/10/2023.
//

#ifndef BUILDERDP_CONCRETEBUILDER_H
#define BUILDERDP_CONCRETEBUILDER_H

#include "Builder.h"
#include "Product.h"

class ConcreteBuilder: public Builder{
private:
    Product* product ;
public:
    ConcreteBuilder(){
        this->Reset() ;
    }
    ~ConcreteBuilder(){delete product ;}
    void Reset(){this->product=new Product ; }
    void ProducePartA() const override{this->product->parts.push_back("pa");}
    void ProducePartB() const override{this->product->parts.push_back("pb");}
    void ProducePartC() const override{this->product->parts.push_back("pc");}
    Product * getProduct(){
        Product* result=this->product ;
        this->Reset() ;
        return  result ;
    }

};
#endif //BUILDERDP_CONCRETEBUILDER_H
