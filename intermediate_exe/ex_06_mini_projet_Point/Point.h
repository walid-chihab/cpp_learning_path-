class Point {
	private:
		float x, y;

	public:
    		//constructeur avec valeurs par défaut
		//Point(float a = 0, float b = 0) : x(a), y(b) {}
	
    		// constructeur sans valeurs par défaut (déclaré seulement)
    		Point(float x, float y);

		void deplace(float dx, float dy);
		void affiche();
};
