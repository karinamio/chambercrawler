class Shade : public Player {
public:
	Shade();
	int score();
	void attack(Enemy * enemy);
	void attackBy(Player * player);
	~Shade();
};