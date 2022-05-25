//
// Created by aldof on 5/22/2022.
//

#include <Eigen/Dense>

using namespace Eigen;

#ifndef HHAPTICS_HMASS_H
#define HHAPTICS_HMASS_H

class hMass
{
public:

    //! Constructor
    hMass(Vector3d a_pos , double a_mass){}

    //! Destructor
    ~hMass();

public:

    Vector3d p_;
    double m_;



};

#endif //HHAPTICS_HMASS_H
