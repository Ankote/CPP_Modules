#include <iostream>
#include <ctime>

int main() {
    // Get the current time
    std::time_t currentTime = std::time(nullptr);
    
    // Convert the time to a struct tm
    std::tm* timeInfo = std::localtime(&currentTime);
    
    // Format the time as "yyyyddmm" using sprintf
    char formattedTime[9]; // 8 characters for the formatted date + 1 for the null terminator
    std::strftime(formattedTime, sizeof(formattedTime), "%Y%d%m", timeInfo);
    
    std::cout << formattedTime << std::endl;
    
    return 0;
}
