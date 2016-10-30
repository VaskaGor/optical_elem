#ifndef MINITEST_RAY_H
#define MINITEST_RAY_H


class Ray {
private:
    double directionAlpha;
    double directionBeta;
public:
    double getDirectionAlpha() const;

    void setDirectionAlpha(double directionAlpha);

    double getDirectionBeta() const;

    void setDirectionBeta(double directionBeta);
};


#endif //MINITEST_RAY_H
