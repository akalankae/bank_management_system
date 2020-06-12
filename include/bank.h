/************************************************************************
 * bank.h
 * Header file: Bank Management System
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define NAME_MAX_LEN  32
#define ID_MAX_LEN    12
#define PHONE_MAX_LEN 10
#define ADDR_MAX_LEN  128
#define ACC_NUM_LEN   8
#define MAX_SAVED_TRANSACTIONS 24


struct Date
{
    int year;           // 1900 + struct tm.tm_year
    int month;          // 0 - 11
    int date;           // day of the month
};

struct Time
{
    int hour;           // 0 - 23
    int minute;         // 0 - 59
    int second;         // 0 - 61
};

struct Transaction
{
    struct Date date;
    struct Time time;
    char type;                  // d=deposit, w=withdrawal
    double amount;
};

struct Owner
{
    char name[NAME_MAX_LEN];    // full name
    struct Date dob;            // date of birth
    char id[ID_MAX_LEN];        // UNIQUE ID number
    char phone[PHONE_MAX_LEN];  // mobile phone number
    char addr[ADDR_MAX_LEN];    // home address

};

struct AccountType
{
    char type;      // s=savings, c=current, 1=1, 2=2, 3=3 yr fixed-deposit
    float int_rate; // 0.0 - 1.0
};

struct AccountHistory
{
    struct Date opened_date;
    struct Transaction transactions[MAX_SAVED_TRANSACTIONS];
};

struct Account
{
    char acc_num[ACC_NUM_LEN];
    struct Owner owner;
    struct AccountType type;
    double acc_bal;
};
