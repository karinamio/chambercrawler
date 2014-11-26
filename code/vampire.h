class Vampire : public Player {
public:
	Vampire();
	void attack(Enemy * enemy);
	void attackBy(Player * player);
	~Vampire();
};