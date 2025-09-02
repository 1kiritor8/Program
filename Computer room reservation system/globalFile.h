//
// Created by dixhuitieme on 2025/4/28.
//

#ifndef COMPUTER_ROOM_RESERVATION_SYSTEM_GLOBALFILE_H
#define COMPUTER_ROOM_RESERVATION_SYSTEM_GLOBALFILE_H

//管理员文件
#define ADMIN_FILE "admin.txt"
//学生文件
#define STUDENT_FILE "student.txt"
//教师文件
#define TEACHER_FILE "teacher.txt"
//机房信息文件
#define COMPUTER_FILE "computerRoom.txt"
//订单文件
#define ORDER_FILE "order.txt"

enum my_Identity
{
    退出,
    学生代表,
    教师,
    管理员
};

enum Londing
{
    学生登录 = 1,
    教师登录,
    管理员登录
};

#endif //COMPUTER_ROOM_RESERVATION_SYSTEM_GLOBALFILE_H
