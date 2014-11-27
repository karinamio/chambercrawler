class Cell;
const int NUM_CHAMBERS = 5;
const int MAP_HEIGHT = 25;
const int MAP_WIDTH = 79;

class Floor{
	FloorSection *chambers[NUM_CHAMBERS];
	FloorSection **passages;
	FloorSection *cave;
	std::list<Character *> moveQ;
	Character **enemies;
	Cell *cell[MAP_HEIGHT][MAP_WIDTH];
public:
	void spawnStair();
	void spawnItems();
	void spawnCharacter(Character *);
	Character ** spawnEnemies();
	void decorateCells();
	~Floor();
	Floor();
};

Floor::Floor(Map* textMap): textMap(textMap){
	for(int i = 0; i < MAP_HEIGHT; i++){
		for(int j = 0; j < MAP_WIDTH; j++){
			cell[i][j] = new Cell(textMap, j, i);
		}
	}

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if (i != 0){
				cell[i][j]->addNeighbour(theGrid[i-1][j]);
			}
			if (i != n-1){
				cell[i][j]->addNeighbour(theGrid[i+1][j]);
			}
			if (j != 0){
				cell[i][j]->addNeighbour(theGrid[i][j-1]);
			}
			if (j != n-1){
				cell[i][j]->addNeighbour(theGrid[i][j+1]);
			}
		}
	}
}