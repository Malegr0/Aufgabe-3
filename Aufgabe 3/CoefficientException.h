#pragma once
#include <string>

class CoefficientException {
private:
	std::string m_className;
	std::string m_cause;

public:
	CoefficientException(const std::string& className, const std::string& cause) : m_className(className), m_cause(cause) {}

	std::string getError() const {
		return "Es ist ein Fehler in der Klasse \"" + m_className + "\" aufgetreten!\nGrund: " + m_cause;
	}

};