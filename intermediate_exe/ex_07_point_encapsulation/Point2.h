class Point {
private:
    float x, y;

public:
    Point(float xval = 0, float yval = 0);
    void deplace(float dx, float dy);
    float abscisse() const;  // retourne x
    float ordonnee() const;  // retourne y
};

