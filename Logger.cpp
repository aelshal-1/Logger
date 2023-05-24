#include "Logger.h"
Logger::Logger(){
    m_File.open("logs.txt");
}
Logger::~Logger(){
    if(m_File.is_open())
        m_File.close();
}
Logger& Logger::Get_Instance(){
    static Logger loger;
    return loger;
}

void Logger::Set_Max_Size_KB(const int& size){
    m_Size_KB = size;
}
void Logger::Set_Tag(const std::string& tag){
    m_Tag = tag;
}

void Logger::Format_Log(const std::stringstream& ss){
    //Base Case For Recursion
}

std::streampos Logger::Get_Size(){
    if(m_File.is_open())
        return m_File.tellp()/1024;
    return 0;
}