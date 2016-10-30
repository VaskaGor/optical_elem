#include "CCD.h"

double CCD::getAbsorptionCoefficient() const {
    return absorptionCoefficient;
}

void CCD::setAbsorptionCoefficient(double absorptionCoefficient) {
    CCD::absorptionCoefficient = absorptionCoefficient;
}

double CCD::getQuantumEfficiency() const {
    return quantumEfficiency;
}

void CCD::setQuantumEfficiency(double quantumEfficiency) {
    CCD::quantumEfficiency = quantumEfficiency;
}

double CCD::getSensitivity() const {
    return sensitivity;
}

void CCD::setSensitivity(double sensitivity) {
    CCD::sensitivity = sensitivity;
}
