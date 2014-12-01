#ifndef __INFO_H__
#define __INFO_H__
#include <string>
#include <map>

class Info {
	std::map<std::string, std::string> info;
public:
	Info();
	void print();
	void notify(std::string,std::string);
};

#endif