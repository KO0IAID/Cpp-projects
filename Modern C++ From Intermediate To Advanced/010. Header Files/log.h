#pragma once
/*
	Modern Convention: #pragma once
	- Prevents this header from being included more than once during compilation
	- Widely supported (GCC ≥ 3.4, MSVC ≥ VS 6.0)
	- Not officially standard, but very commonly used
*/

// Legacy Convention: Include guards for compatibility
#ifndef LOG_H						// Convention: Use ALL_CAPS for header guards
#define LOG_H						
									
#include <iostream>					// We can safely include whatever is needed now
#include <string>					// needed for std::string

/*
	Header files should contain:
	- Function declarations (not definitions, unless inline or using a template)
	- Class & Enum declarations
	- Constant or macro definitions
	- Type definitions
*/
				
// ==============================
// 1. Function Declarations
// ==============================
void log();


// ==============================
// 2. Class & Enum Declaratiions
// ==============================
class Logger {
public:
	Logger(const std::string& name);
	void logInfo(const std::string& message);
	void logError(const std::string& message);

private:
	std::string loggerName;
};

enum class LogLevel {
	Info,
	Warning,
	Error
};

// ==============================
// 3. Constant & Macro Definition
// ==============================

#define LOG_VERSION "1.0.0"						// Macro definition
constexpr int MAX_LOG_LENGTH = 256;				// Constant

#endif 





