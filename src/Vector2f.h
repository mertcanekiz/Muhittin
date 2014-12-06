#ifndef VECTOR2F_H
#define VECTOR2F_H

class Vector2f
{

public:
    Vector2f(float x, float y) { this->x = x; this->y = y; }
    inline float getX() const { return x; }
    inline float getY() const { return y; }
    inline void setX(float x) { this->x = x; }
    inline void setY(float y) { this->y = y; }
    inline void add(Vector2f v) { this->x += v.getX(); this->y += v.getY(); }
    inline void add(float x, float y) { this->x += x; this->y += y; }
private:
    float x, y;

};

#endif
