#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    //String^ imie;
    Console::Write ("Podaj swoje imie : ");
    String^ imie = Console::ReadLine();

    Console::WriteLine(L"Witaj "+imie+" w Kursie C++");
    //Console::Read();
    return 0;
}
 