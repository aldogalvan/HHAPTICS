//
// Created by aldof on 5/22/2022.
//

#include <Eigen/Dense>

using namespace Eigen;

#ifndef HHAPTICS_HMESH_H
#define HHAPTICS_HMESH_H

class hMesh
{
public:

    //! Constructor
    hMesh(){}

    //! Destructor
    ~hMesh();

public:

    MatrixXd& vertices(){return v_;}
    const int& numVertices(){return vi_;};
    MatrixXi& faces(){return f_;}
    const int& numFaces(){return fi_;}
    MatrixXi& elements(){return e_;}
    const int& numElements(){return ei_;}
    MatrixXi& edges(){return ed_;}
    const int& numEdges(){return edi_;}

public:

    //! This virtual method creates a rectangular mesh
    virtual void createRectangularMesh(){}


public:

    MatrixXd v_;         // Vertices
    MatrixXi f_;         // Faces
    MatrixXi e_;         // Elements
    MatrixXi ed_;        // Edges
    int vi_;             // Number of vertices
    int fi_;             // Number of faces
    int ei_;             // Number of elements
    int edi_;            // Number of edges

};

#endif //HHAPTICS_HMESH_H
