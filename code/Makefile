CXX = g++
CXXFLAGS = -Wall -MMD
EXEC = cc3k
OBJECTS = main.o board.o map.o floor.o cell.o plaincell.o celldecorator.o door.o tile.o wall.o passage.o stair.o entity.o item.o character.o gold.o player.o abstractplayer.o shade.o enemy.o human.o info.o restorehealthpotion.o potion.o boostatkpotion.o boostdefpotion.o poisonhealthpotion.o woundatkpotion.o wounddefpotion.o orc.o elf.o dwarf.o merchant.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}