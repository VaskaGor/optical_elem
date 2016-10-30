#include "Ray.h"

double Ray::getDirectionAlpha() const {
    return directionAlpha;
}

void Ray::setDirectionAlpha(double directionAlpha) {
    Ray::directionAlpha = directionAlpha;
}

double Ray::getDirectionBeta() const {
    return directionBeta;
}

void Ray::setDirectionBeta(double directionBeta) {
    Ray::directionBeta = directionBeta;
}
