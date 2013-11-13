#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "point3d.h"

class Parallelepiped
{
public:
    Parallelepiped(Point3D<float> center, Point3D<float> size);

    ~Parallelepiped();

    Point3D<float> getCenter();
    Point3D<float> getSize();
    void setCenter(Point3D<float> center);
    void setSize(Point3D<float> size);

private:
    Point3D<float> _center;
    Point3D<float> _size;
};

#endif // PARALLELEPIPED_H
