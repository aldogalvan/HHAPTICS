//
// Created by aldof on 5/22/2022.
//

#include "HHexahedralMesh.h"


/////////////////////////////////////////////////////////

void hHexahedralMesh::createRectangularMesh(double a_length , double a_width, double a_height, int a_density)
{
    MatrixXd vtemp_(pow(a_density,3),3);
    //MatrixXi ftemp_()

    for (int i = 0u ; i < a_density ; i++)
    {
        for (int j = 0u ; j < a_density ; j++)
        {
            for (int k = 0u; k < a_density; k++)
            {

                if ( i <= 0)
                {

                }
            }
        }
    }

    v_ = vtemp_;
}