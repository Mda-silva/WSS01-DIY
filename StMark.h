/***********************************************************************
OOP244 Workshop # p2: file tester program
Version 1.0
Date	   winter 2024
Author	Fardad Soleimanloo
Description
  tests the file module of workshop 1 part 2(DIY)
Revision History
-----------------------------------------------------------
Name Marquez DaSilva            Date  February 18 2024         Reason
***********************************************************************/

#ifndef SENECA_STMARK_H
#define SENECA_STMARK_H
namespace seneca {

    /// <summary>
    /// Record of a mark received by a student.
    /// </summary>
    struct StMark {
        char name[21];
        char surname[31];
        int mark;
    };



    bool printReport(const char* filename);
}
#endif // !SENECA_STMARK_H