#pragma once
#include <string>
#include <fstream>
#include <sstream>
class Logger{
    std::ofstream m_File;
    std::string m_Tag;
    int m_Size_KB{10};
    Logger();
    void Format_Log(const std::stringstream& ss);

    template<typename T,typename... Args>
    void Format_Log(std::stringstream& ss,const T& arg, const Args&... args){
        ss << arg << " ";
        Format_Log(ss,args...);
    }
    std::streampos Get_Size(); 
public:
    Logger(const Logger&) = delete;
    Logger& operator= (const Logger&) = delete;
    ~Logger();
    static Logger& Get_Instance();
    void Set_Max_Size_KB(const int& size);
    void Set_Tag(const std::string& tag);
    template<typename... Args>
    void Log(Args... args){
        if(m_File.is_open()){
           std::stringstream ss;
            Format_Log(ss,args...);
            std::string data =   ss.str(); 
           if( (Get_Size() + data.size()/1024 )< m_Size_KB)
                m_File <<"["<<m_Tag<<":"<< __FILE__ << ":"<<__LINE__<<"]: " << data <<std::endl;
        }
    }
};