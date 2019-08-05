#include "flute4nthuroute.h"
#include "misc/debug.h"

Flute::Flute ()
:x_(NULL),
 y_(NULL)
{
    readLUT();      //Read in the binary lookup table - POWVFILE, POSTFILE
}

Flute::~Flute () 
{
    
}

void Flute::routeNet (const PinptrList& pinList, Tree& routingTree)
{
    int pinNumber = pinList.size();

    x_ = new DTYPE[pinNumber];    //int array used as input of FLUTE
    y_ = new DTYPE[pinNumber];    //int array used as input of FLUTE
    // insert 2D-coordinate of pins of a net into x_ and y_
    for (int pinId = 0; pinId < pinNumber; ++pinId) {
        x_[pinId] = pinList[pinId]->x();
        y_[pinId] = pinList[pinId]->y();
    }

    // obtain the routing tree by FLUTE
    routingTree = flute(pinNumber, x_, y_, ACCURACY);

    if (x_ != NULL) {
        delete[] x_;
        x_ = NULL;
    }
    if (y_ != NULL) {
        delete[] y_;
        y_ = NULL;
    }
}

void Flute::printTree (Tree& routingTree)
{
    printtree(routingTree);
}

int Flute::treeWireLength (Tree& routingTree)
{
    return static_cast<int>( wirelength(routingTree) );
}
