class Drow : public Player {
public:
	Drow();
	void attack(Enemy * enemy);
	void attackBy(Player * player);
	void usePotion(string direction);
	~Drow();
};