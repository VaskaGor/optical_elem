#ifndef MINITEST_CCD_H
#define MINITEST_CCD_H


class CCD {
private:
    double absorptionCoefficient;
    double quantumEfficiency;
    double sensitivity;
public:
    double getAbsorptionCoefficient() const;

    void setAbsorptionCoefficient(double absorptionCoefficient);

    double getQuantumEfficiency() const;

    void setQuantumEfficiency(double quantumEfficiency);

    double getSensitivity() const;

    void setSensitivity(double sensitivity);
};


#endif //MINITEST_CCD_H
