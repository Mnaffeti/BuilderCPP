//
// Created by mnaffeti on 17/10/2023.
//

#ifndef BUILDERDP_ORCHESTOR_H
#define BUILDERDP_ORCHESTOR_H

#include "Builder.h"

class  Orchestor{
private:
    Builder* builder ;
public:
    void set_builder(Builder * builder) ;
    void BuildProduct() ;
    void BuildFeaturedProduct() ;

};
#endif //BUILDERDP_ORCHESTOR_H
