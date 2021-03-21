#include <cmath>

template<typename T>
class vector2d
{
public:
    T x,y;
    vector2d(std::initializer_list<T> a) : x{*a.begin()},y{*(a.end()-1)}{}
    vector2d() : x{0},y{0}{}

    vector2d<T> operator+=(vector2d<T> const& b){
        x += b.x;
        y += b.y;
        return *this;
    }

    vector2d<T> operator-=(vector2d<T> const& b){
        x -= b.x;
        y -= b.y;
        return *this;
    }

    vector2d<T> operator*=(T const& a){
        x = x*a;
        y = y*a;
        return *this;
    }

    vector2d<T> operator/=(T const& a){
        x = x/a;
        y = y/a;
        return *this;
    }
};

template<typename T>
vector2d<T> operator-(vector2d<T> const& a, vector2d<T> const& b){
    return vector2d{a.x-b.x, a.y-b.y};
}

template<typename T>
vector2d<T> operator+(vector2d<T> const& a, vector2d<T> const& b){
    return vector2d{a.x+b.x, a.y+b.y};
}

template<typename T, typename A>
vector2d<T> operator*(A const& a, vector2d<T> const& v){
    return vector2d{a*v.x, a*v.y};
}

template<typename T, typename A>
vector2d<T> operator*(vector2d<T> const& v, A const& a){
    return vector2d{a*v.x, a*v.y};
}

template<typename T>
vector2d<T> operator/=(vector2d<T> const& v, T const& a){
    return vector2d{v.x/a, v.y/a};
}

template<typename T>
T dot(vector2d<T> const& a, vector2d<T> const& b){
    return a.x*b.x + a.y*b.y;
}

template<typename T>
T lenght(vector2d<T> const& v){
    return sqrt(v.x*v.x + v.y*v.y);
}

template<typename T>
T sqlenght(vector2d<T> const& v){
    return v.x*v.x + v.y*v.y;
}

template<typename T>
vector2d<T> normalize(vector2d<T> const& v){
    return vector2d{v.x/lenght(v), v.y/lenght(v)};
}