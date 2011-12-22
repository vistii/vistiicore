/*
 * vistiicore.cpp
 *
 *  Created on: Dec 22, 2011
 *      Author: noel
 */

# include <json_spirit_reader.h>

using namespace std;
using namespace json_spirit;

void evaluate(char* json) {
	const std::string& jsonString(json);
	Value value;
	read_or_throw(jsonString, value);
}

int main() {
	char json[] = "hello";
	evaluate(json);
	return 0;
}
