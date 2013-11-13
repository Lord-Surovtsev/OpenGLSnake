#ifndef POINT3D_H
#define POINT3D_H

template <class T>
class Point3D
{
public:

    Point3D(T x = 0, T y = 0, T z = 0)
    {
        _x = x;
        _y = y;
        _z = z;
    }

    Point3D(const Point3D& p)
    {
        this->_x = p._x;
        this->_y = p._y;
        this->_z = p._z;
    }

    ~Point3D()
    {

    }

    Point3D& operator=(const Point3D& other)
    {
        if (this != &other)
        {
            _x = other._x;
            _y = other._y;
            _z = other._z;
        }
        return *this;
    }

    T getX()
    {
        return _x;
    }

    T getY()
    {
        return _y;
    }

    T getZ()
    {
        return _z;
    }

    void setX(T x)
    {
        _x = x;
    }

    void setY(T y)
    {
        _y = y;
    }

    void setZ(T z)
    {
        _z = z;
    }

private:
    T _x;
    T _y;
    T _z;

};

#endif // POINT3D_H
