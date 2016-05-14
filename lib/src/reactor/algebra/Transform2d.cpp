#include "reactor/math/Arithmetic.hpp"
#include "reactor/algebra/Vector2d.hpp"
#include "reactor/algebra/Transform2d.hpp"

namespace reactor { namespace algebra {

using namespace reactor::math;

/****************
 * Constructors *
 ****************/

template <typename TScalar>
Transform2d<TScalar>::Transform2d() {
}


/**************
 * Operations *
 **************/

/*************
 * Accessors *
 *************/

/*************
 * Functions *
 *************/

template <typename TScalar>
Vector2d<TScalar> lerp(const Vector2d<TScalar>& a, const Vector2d<TScalar>& b, TScalar t) {
    return a + t * (b - a);
}

//TScalar lengthSq() const;
//TScalar maxLength() const;
//TScalar distanceTo(const Vector2d<TScalar>& p) const;
//TScalar distanceToSq(const Vector2d<TScalar>& p) const;
//
//Vector2d<TScalar> ort() const;
//Vector2d<TScalar>& normalize();
//

}} // namespace reactor::algebra
