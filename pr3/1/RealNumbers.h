class RealNumbers {
private:
    double leftBoundary;
    double rightBoundary;

public:
    RealNumbers(double left, double right) : leftBoundary(left), rightBoundary(right) {}

    double getLeftBoundary() const {
        return leftBoundary;
    }

    double getRightBoundary() const {
        return rightBoundary;
    }

    double calculateRangeSquare() const {
        double range = rightBoundary - leftBoundary;
        return range * range;
    }
};