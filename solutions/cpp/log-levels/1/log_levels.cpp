#include <string>


namespace log_line {
std::string message(std::string line) {
    // return the message
    int position_message = line.find(":");
    std::string message = line.substr(position_message + 2);
    
    
    return message;
    
}

std::string log_level(std::string line) {
    // return the log level
    int position1_level = line.find("[");
    int position2_level = line.find("]");
    int length_level = position2_level - position1_level - 1;
    
    std::string level = line.substr(position1_level + 1, length_level);
    return level;
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string message_temp = message(line);
    std::string level = log_level(line);
    return message_temp + " (" + level + ")";
}
}  // namespace log_line
