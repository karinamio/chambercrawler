class Troll : public Player {
public:
	Troll();
	void endTurn();
	void attack(Enemy * enemy);
	void attackBy(Player * player);
	~Troll();
};