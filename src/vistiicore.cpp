/*
 * vistiicore.cpp
 *
 *  Created on: Dec 22, 2011
 *      Author: noel
 */

#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>

void evaluate(char* json) {
	std::stringstream ss;
	ss << json;
	boost::property_tree::ptree pt;
	boost::property_tree::json_parser::read_json(std::basic_istream<);
}

int main() {
	char json[] = "hello";
	evaluate(json);
	return 0;
}
