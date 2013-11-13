#include "parallelepiped.h"

Parallelepiped::Parallelepiped(Point3D<float> center, Point3D<float> size)
{
    _center = center;
    _size = size;
}

Parallelepiped::~Parallelepiped()
{

}

Point3D<float> Parallelepiped::getCenter()
{
    return _center;
}

Point3D<float> Parallelepiped::getSize()
{
    return _size;
}

void Parallelepiped::setCenter(Point3D<float> center)
{
    _center = center;
}

void Parallelepiped::setSize(Point3D<float> size)
{
    _size = size;
}
