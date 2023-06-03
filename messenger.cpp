#include <iostream>
#include <string>

// تعریف ساختار اطلاعات کاربر
struct User {
    std::string username;
    std::string password;
    std::string firstname;
    std::string lastname;
};

// تابع ثبت نام کاربر
void signup(const std::string& username, const std::string& password, const std::string& firstname, const std::string& lastname) {
    // ایجاد یک شیء کاربر جدید و پر کردن اطلاعات آن
    User newUser;
    newUser.username = username;
    newUser.password = password;
    newUser.firstname = firstname;
    newUser.lastname = lastname;

    // انجام عملیات ثبت نام (می‌توانید اینجا کد خود را بنویسید)
    // ...

    // نمایش پیام ثبت نام موفقیت‌آمیز
    std::cout << "ثبت نام کاربر با موفقیت انجام شد." << std::endl;
}

int main() {
    // تست تابع ثبت نام کاربر
    signup("username123", "password123", "John", "Doe");

    return 0;
}
