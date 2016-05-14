#include "reactor/math/Arithmetic.hpp"
#include "reactor/algebra/Vector2d.hpp"

namespace reactor { namespace algebra {

using namespace reactor::math;

/****************
 * Constructors *
 ****************/

template <typename TScalar>
Vector2d<TScalar>::Vector2d() {
}

template <typename TScalar>
Vector2d<TScalar>::Vector2d(const TScalar x, const TScalar y) {
    this->mx = x;
    this->my = y;
}

template <typename TScalar>
Vector2d<TScalar>::Vector2d(const Vector2d<TScalar>& vector) {
    this->mx = vector.mx;
    this->my = vector.my;
}

template <typename TScalar>
Vector2d<TScalar>::Vector2d(const Vector2d<TScalar>&& vector) {
    this->mx = vector.mx;
    this->my = vector.my;
}


/**************
 * Operations *
 **************/

template <typename TScalar>
const Vector2d<TScalar>& Vector2d<TScalar>::operator = (const TScalar& value) {
    this->mx = value;
    this->my = value;

    return *this;
}

template <typename TScalar>
const Vector2d<TScalar>& Vector2d<TScalar>::operator = (const Vector2d<TScalar>& vector) {
    this->mx = vector.mx;
    this->my = vector.my;

    return *this;
}

template <typename TScalar>
const Vector2d<TScalar>& Vector2d<TScalar>::operator = (const Vector2d<TScalar>&& vector) {
    this->mx = vector.mx;
    this->my = vector.my;

    return *this;
}

template <typename TScalar>
Vector2d<TScalar> Vector2d<TScalar>::operator + () const {
    return *this;
}

template <typename TScalar>
Vector2d<TScalar> Vector2d<TScalar>::operator - () const {
    return Vector2d<TScalar>(-this->mx, -this->my);
}


template <typename TScalar>
Vector2d<TScalar>& Vector2d<TScalar>::operator += (const Vector2d<TScalar>& vector) {
    this->mx += vector.mx;
    this->my += vector.my;

    return *this;
}

template <typename TScalar>
Vector2d<TScalar>& Vector2d<TScalar>::operator -= (const Vector2d<TScalar>& vector) {
    this->mx -= vector.mx;
    this->my -= vector.my;

    return *this;
}

template <typename TScalar>
Vector2d<TScalar>& Vector2d<TScalar>::operator *= (const Vector2d<TScalar>& vector) {
    this->mx *= vector.mx;
    this->my *= vector.my;

    return *this;
}

template <typename TScalar>
Vector2d<TScalar>& Vector2d<TScalar>::operator *= (TScalar value) {
    this->mx *= value;
    this->my *= value;

    return *this;
}

template <typename TScalar>
Vector2d<TScalar>& Vector2d<TScalar>::operator /= (const Vector2d<TScalar>& vector) {
    this->mx /= vector.mx;
    this->my /= vector.my;

    return *this;
}

template <typename TScalar>
Vector2d<TScalar>& Vector2d<TScalar>::operator /= (TScalar value) {
    this->mx /= value;
    this->my /= value;

    return *this;
}


template <typename TScalar>
TScalar& Vector2d<TScalar>::operator [] (uint index) {
    return index == 0 ? this->mx : this->my;
}


template <typename TScalar>
int Vector2d<TScalar>::operator == (const Vector2d<TScalar>& vector) {
    return this->mx == vector.mx && this->my == vector.my;
}

template <typename TScalar>
int Vector2d<TScalar>::operator != (const Vector2d<TScalar>& vector) {
    return this->mx != vector.mx || this->my != vector.my;
}


template <typename TScalar>
Vector2d<TScalar>::operator TScalar * () {
    return &this->mx;
}

template <typename TScalar>
Vector2d<TScalar>::operator const TScalar * () const {
    return &this->mx;
}


template <typename TScalar>
Vector2d<TScalar> operator + (const Vector2d<TScalar>& u, const Vector2d<TScalar>& v) {
    return Vector2d<TScalar>(u.mx + v.mx, u.my + v.my);
}

template <typename TScalar>
Vector2d<TScalar> operator - (const Vector2d<TScalar>& u, const Vector2d<TScalar>& v) {
    return Vector2d<TScalar>(u.mx - v.mx, u.my - v.my);
}

template <typename TScalar>
Vector2d<TScalar> operator * (const Vector2d<TScalar>& u, const Vector2d<TScalar>& v) {
    return Vector2d<TScalar>(u.mx * v.mx, u.my * v.my);
}

template <typename TScalar>
Vector2d<TScalar> operator * (const Vector2d<TScalar>& vector, TScalar value) {
    return Vector2d<TScalar>(vector.mx * value, vector.my * value);
}

template <typename TScalar>
Vector2d<TScalar> operator * (TScalar value, const Vector2d<TScalar>& vector) {
    return Vector2d<TScalar>(vector.mx * value, vector.my * value);
}

template <typename TScalar>
Vector2d<TScalar> operator / (const Vector2d<TScalar>& u, const Vector2d<TScalar>& v) {
    return Vector2d<TScalar>(u.mx / v.mx, u.my / v.my);
}

template <typename TScalar>
Vector2d<TScalar> operator / (const Vector2d<TScalar>& vector, TScalar value) {
    return Vector2d<TScalar>(vector.mx / value, vector.my / value);
}

template <typename TScalar>
Vector2d<TScalar> operator / (TScalar value, const Vector2d<TScalar>& vector) {
    return Vector2d<TScalar>(value / vector.mx, value / vector.my);
}

template <typename TScalar>
TScalar operator & (const Vector2d<TScalar>& u, const Vector2d<TScalar>& v) {
    return u.mx * v.mx + u.my * v.my;
}


/*************
 * Accessors *
 *************/

template <typename TScalar>
TScalar Vector2d<TScalar>::x() const {
    return this->mx;
}

template <typename TScalar>
Vector2d<TScalar>& Vector2d<TScalar>::x(TScalar x) {
    this->mx = x;
    return *this;
}

template <typename TScalar>
TScalar Vector2d<TScalar>::y() const {
    return this->my;
}

template <typename TScalar>
Vector2d<TScalar>& Vector2d<TScalar>::y(TScalar y) {
    this->my = y;
    return *this;
}


/*************
 * Functions *
 *************/

template <typename TScalar>
TScalar Vector2d<TScalar>::length() const {
    return Arithmetic<TScalar>::sqrt((TScalar) (this->mx * this->mx + this->my * this->my));
}

template <typename TScalar>
TScalar Vector2d<TScalar>::lengthSq() const {
    return this->mx * this->mx + this->my * this->my;
}

template <typename TScalar>
TScalar Vector2d<TScalar>::maxLength() const {
    return Arithmetic<TScalar>::max(Arithmetic<TScalar>::abs(this->mx), Arithmetic<TScalar>::abs(this->my));
}

template <typename TScalar>
TScalar Vector2d<TScalar>::distanceTo(const Vector2d<TScalar>& point) const {
    return Arithmetic<TScalar>::sqrt(Arithmetic<TScalar>::sqr(this->mx - point.mx) + Arithmetic<TScalar>::sqr(this->my - point.my));
}

template <typename TScalar>
TScalar Vector2d<TScalar>::distanceToSq(const Vector2d<TScalar>& point) const {
    return Arithmetic<TScalar>::sqr(this->mx - point.mx) + Arithmetic<TScalar>::sqr(this->my - point.my);
}


template <typename TScalar>
Vector2d<TScalar> Vector2d<TScalar>::ort() const {
    return Vector2d<TScalar>(-this->my, this->mx);
}

template <typename TScalar>
Vector2d<TScalar>& Vector2d<TScalar>::normalize() {
    return (*this) /= length();
}


}} // namespace reactor::algebra
