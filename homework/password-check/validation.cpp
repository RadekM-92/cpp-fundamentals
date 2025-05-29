#include "validation.hpp"


std::string getErrorMessage(ErrorCode Err)
{
    switch(Err)
    {
        case ErrorCode::Ok:
        return "Ok";
        break;

        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs to have at least nine characters";
        break;

        case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs to have at least one number";
        break;

        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs to have at least one special character";
        break;

        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs to have at least one uppercase letter";
        break;

        case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";
        break;
    }
}

bool doPasswordsMatch(std::string& str1, std::string& str2)
{
    if(0==str1.compare(str2)){
        return true;
    }
    else{
        return false;
    }
}

std::string checkPasswordRules(std::string& str)
{
    if(std::rand()%2){
        return "PasswordNeedsAtLeast*";
    }
    else{
        return "Ok";
    }
}