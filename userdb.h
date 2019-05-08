#ifndef USERDB_H
#define USERDB_H

#include <QSqlDatabase>
#include <QString>

class UserDatabase : private QSqlDatabase {
public:
       UserDatabase();
       ~UserDatabase();
       bool check_usr(const QString &usr) const; //检查用户名是否存在
       int check_usr_pwd(const QString &usr,const QString &pwd) const; //返回0表示正确，返回1表示用户名错误，返回2表示密码错误
       void add_usr(const QString &usr, const QString &pwd, const QString &name, const int &usrtype);
};

#endif // USERDB_H
