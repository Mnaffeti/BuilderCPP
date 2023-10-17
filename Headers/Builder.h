//
// Created by mnaffeti on 17/10/2023.
//

#ifndef BUILDERDP_BUILDER_H
#define BUILDERDP_BUILDER_H


class Builder {
public:
    virtual ~Builder(){}
    virtual void ProducePartA() const=0 ;
    virtual void ProducePartB() const=0 ;
    virtual void ProducePartC() const=0 ;

};


#endif //BUILDERDP_BUILDER_H
