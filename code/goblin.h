class Goblin : public Player {
public:
	Goblin();
	void attack(Enemy * enemy);
	void attackBy(Player * player);
	~Goblin();
};