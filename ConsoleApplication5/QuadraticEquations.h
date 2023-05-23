class QuadraticEquations
{
public:
    QuadraticEquations(double = 1, double = 0, double = 0,
        double = 0, double = 0);

    void setValues(double, double, double);

    bool solve();             // решает уравнение. возвращает 0 в случае "НЕТ КОРНЕЙ"
    // и 1 в случае успешного решения
    double getX1() const;
    double getX2() const;

private:
    double a;
    double b;
    double c;

    double x1, x2;

    double findDiscrim();
};