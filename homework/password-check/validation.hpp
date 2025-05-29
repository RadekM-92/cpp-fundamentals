#pragma once
#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

using password_t = const std::string&;

std::string getErrorMessage(ErrorCode);
bool doPasswordsMatch(password_t, password_t);
ErrorCode checkPasswordRules(password_t);
ErrorCode checkPassword(password_t, password_t);