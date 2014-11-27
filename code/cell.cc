class Cell {
protected:
	Entity * cellObject;
	Map * textMap;
	Cell ** neighbours[9];
	int x;
	int y;
public:
	virtual bool movable(Character * character);
	virtual void notify (int x, int y, char update);
	virtual bool attackable();
	virtual void setEntity(Entity * entity);
	virtual bool useable();
	virtual void use();
	void addNeighbour();
};

Cell::Cell(Map* textMap, int x, int y):textMap(textMap), x(x), y(y), numNeighbours(0){

}

void Cell::addNeighbour(Cell *neighbour){
	neighbours[numNeighbours] = neighbour;
	++ numNeighbours;
}