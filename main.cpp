#include <iostream>
#include<conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
struct patient
{
    long long ID;
    string firstname;
    string lastname;
    int age;
    char blood[5];
    char gender;
    patient *next;
};
