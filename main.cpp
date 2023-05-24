#include <iostream>
#include "Logger.h"

int main(){
    
    Logger& logger = Logger::Get_Instance();
    logger.Set_Max_Size_KB(1);
    logger.Set_Tag("Carrefour");
    logger.Log("retVal = ", 10 , ": Tag =",10.012);
    logger.Log("ahmed = ", 1223355);
    logger.Log("new");
    logger.Log("retVal = ", 10 , ": Tag =",10.012);
    logger.Log("ahmed = ", 1223355);
    logger.Log("new");
    logger.Log("retVal = ", 10 , ": Tag =",10.012);
    logger.Log("ahmed = ", 1223355);
    logger.Log("new");
    logger.Log("retVal = ", 10 , ": Tag =",10.012);
    logger.Log("ahmed = ", 1223355);
    logger.Log("new");
    logger.Log("retVal = ", 10 , ": Tag =",10.012);
    logger.Log("ahmed = ", 1223355);
    logger.Log("new");
    return 0;
}