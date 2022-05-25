//
// Created by aldof on 5/22/2022.
//

#include <Eigen/Dense>
#include "HMesh.h"

using namespace Eigen;

#ifndef HHAPTICS_HHEXAHEDRALMESH_H
#define HHAPTICS_HHEXAHEDRALMESH_H

class hHexahedralMesh : public hMesh
{
public:

    //! Constructor
    hHexahedralMesh(){}

    //! Destructor
    ~hHexahedralMesh();

public:

    //! This method creates a rectangular mesh
    virtual void createRectangularMesh(double a_length , double a_width, double a_height, int a_density = 10);
};


#endif //HHAPTICS_HHEXAHEDRALMESH_H
