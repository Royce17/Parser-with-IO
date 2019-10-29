/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 20 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 10/29/19
* Time: 21:49:30
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2019年10月24日
****************************************************************************/
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

#line 51 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 28 ".\\mylexer.l"

	// place any extra initialisation code here


#line 76 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 34 ".\\mylexer.l"

	// place any extra cleanup code here

#line 88 "mylexer.cpp"
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 61 ".\\mylexer.l"
/* no action and no return */
#line 160 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 62 ".\\mylexer.l"
/* no action and no return */
#line 167 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 65 ".\\mylexer.l"
cout << "INT\t\t" << "int" << endl;
#line 174 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 66 ".\\mylexer.l"
cout << "CHAR\t\t" << "char" << endl;
#line 181 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 70 ".\\mylexer.l"
cout << "IF\t\t" << yytext << endl;
#line 188 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 71 ".\\mylexer.l"
cout << "ELSE\t\t" << yytext << endl;
#line 195 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 72 ".\\mylexer.l"
cout << "WHILE\t\t" << yytext << endl;
#line 202 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 73 ".\\mylexer.l"
cout << "FOR\t\t" << "for" << endl;
#line 209 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 75 ".\\mylexer.l"
cout << "SWITCH\t\t" << yytext << endl;
#line 216 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 78 ".\\mylexer.l"

				if(idlist.find(yytext) == idlist.end())
				{
					idlist[yytext]=idcount;
					idcount++;
				}
				cout<<"ID\t\t"<<yytext<<"\t\t"<<idlist[yytext]<<endl;
			
#line 230 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 86 ".\\mylexer.l"
cout<<"NUMBER\t\t"<<yytext<<"\t\t"<<yytext<<endl;
#line 237 "mylexer.cpp"
		}
		break;
#line 87 ".\\mylexer.l"
			
#line 242 "mylexer.cpp"
	case 12:
		{
#line 89 ".\\mylexer.l"
cout<<"SEMICOLON\t\t"<<yytext<<endl;
#line 247 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 90 ".\\mylexer.l"
cout<<"LBRACE\t\t"<<yytext<<endl;
#line 254 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 91 ".\\mylexer.l"
cout<<"RBRACE\t\t"<<yytext<<endl;
#line 261 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 92 ".\\mylexer.l"
cout<<"LPAREN\t\t"<<yytext<<endl;
#line 268 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 93 ".\\mylexer.l"
cout<<"RPAREN\t\t"<<yytext<<endl;
#line 275 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 96 ".\\mylexer.l"
cout<<"MULTIPLY\t\t"<<yytext<<endl;
#line 282 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 97 ".\\mylexer.l"
cout<<"DIVIDE\t\t"<<yytext<<endl;
#line 289 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 98 ".\\mylexer.l"
cout<<"MOD\t\t"<<yytext<<endl;
#line 296 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 99 ".\\mylexer.l"
cout<<"PLUS\t\t"<<yytext<<endl;
#line 303 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 100 ".\\mylexer.l"
cout<<"MINUS\t\t"<<yytext<<endl;
#line 310 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 103 ".\\mylexer.l"
cout<<"BRSHIFT\t\t"<<yytext<<endl;
#line 317 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 104 ".\\mylexer.l"
cout<<"BLSHIFT\t\t"<<yytext<<endl;
#line 324 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 107 ".\\mylexer.l"
cout<<"LTE\t\t"<<yytext<<endl;
#line 331 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 108 ".\\mylexer.l"
cout<<"GTE\t\t"<<yytext<<endl;
#line 338 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 109 ".\\mylexer.l"
cout<<"LT\t\t"<<yytext<<endl;
#line 345 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 110 ".\\mylexer.l"
cout<<"GT\t\t"<<yytext<<endl;
#line 352 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 113 ".\\mylexer.l"
cout<<"EQ\t\t"<<yytext<<endl;
#line 359 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 114 ".\\mylexer.l"
cout<<"NEQ\t\t"<<yytext<<endl;
#line 366 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 117 ".\\mylexer.l"
cout<<"BAND\t\t"<<yytext<<endl;
#line 373 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 118 ".\\mylexer.l"
cout<<"BXOR\t\t"<<yytext<<endl;
#line 380 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 119 ".\\mylexer.l"
cout<<"BOR\t\t"<<yytext<<endl;
#line 387 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 120 ".\\mylexer.l"
cout<<"LAND\t\t"<<yytext<<endl;
#line 394 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 121 ".\\mylexer.l"
cout<<"LOR\t\t"<<yytext<<endl;
#line 401 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 124 ".\\mylexer.l"
cout<<"ASSIGN\t\t"<<yytext<<endl;
#line 408 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 125 ".\\mylexer.l"
cout<<"PLUS_ASSIGN\t\t"<<yytext<<endl;
#line 415 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 126 ".\\mylexer.l"
cout<<"MINUS_ASSIGN\t\t"<<yytext<<endl;
#line 422 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 127 ".\\mylexer.l"
cout<<"MUL_ASSIGN\t\t"<<yytext<<endl;
#line 429 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 128 ".\\mylexer.l"
cout<<"DIV_ASSIGN\t\t"<<yytext<<endl;
#line 436 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 129 ".\\mylexer.l"
cout<<"MOD_ASSIGN\t\t"<<yytext<<endl;
#line 443 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 130 ".\\mylexer.l"
cout<<"BLS_ASSIGN\t\t"<<yytext<<endl;
#line 450 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 131 ".\\mylexer.l"
cout<<"BRS_ASSIGN\t\t"<<yytext<<endl;
#line 457 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 132 ".\\mylexer.l"
cout<<"BAND_ASSIGN\t\t"<<yytext<<endl;
#line 464 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 133 ".\\mylexer.l"
cout<<"BXOR_ASSIGN\t\t"<<yytext<<endl;
#line 471 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 134 ".\\mylexer.l"
cout<<"BOR_ASSIGN\t\t"<<yytext<<endl;
#line 478 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 137 ".\\mylexer.l"
cout<<"COMMA\t\t"<<yytext<<endl;
#line 485 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 193;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 3, 1 },
		{ 53, 28 },
		{ 32, 6 },
		{ 3, 1 },
		{ 49, 24 },
		{ 45, 20 },
		{ 3, 3 },
		{ 3, 3 },
		{ 65, 65 },
		{ 46, 21 },
		{ 3, 3 },
		{ 47, 22 },
		{ 50, 24 },
		{ 71, 65 },
		{ 40, 16 },
		{ 41, 16 },
		{ 0, 73 },
		{ 43, 18 },
		{ 44, 18 },
		{ 48, 23 },
		{ 36, 12 },
		{ 51, 25 },
		{ 3, 1 },
		{ 4, 1 },
		{ 55, 56 },
		{ 33, 6 },
		{ 52, 26 },
		{ 5, 1 },
		{ 6, 1 },
		{ 3, 3 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 31, 5 },
		{ 13, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 14, 1 },
		{ 73, 73 },
		{ 15, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 66, 73 },
		{ 37, 13 },
		{ 37, 37 },
		{ 56, 56 },
		{ 0, 38 },
		{ 57, 40 },
		{ 38, 13 },
		{ 58, 44 },
		{ 66, 56 },
		{ 59, 46 },
		{ 60, 47 },
		{ 54, 28 },
		{ 61, 48 },
		{ 62, 50 },
		{ 63, 51 },
		{ 64, 52 },
		{ 65, 55 },
		{ 30, 4 },
		{ 67, 59 },
		{ 68, 60 },
		{ 39, 13 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 14, 14 },
		{ 20, 1 },
		{ 69, 63 },
		{ 70, 64 },
		{ 34, 9 },
		{ 74, 69 },
		{ 21, 1 },
		{ 75, 70 },
		{ 22, 1 },
		{ 23, 1 },
		{ 72, 72 },
		{ 42, 17 },
		{ 24, 1 },
		{ 76, 74 },
		{ 35, 10 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 25, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 26, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 27, 1 },
		{ 28, 1 },
		{ 29, 1 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 19, 76 },
		{ 0, 0 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 },
		{ 19, 76 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 76, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -1, 1 },
		{ 0, 11, 0 },
		{ 0, -23, 19 },
		{ 0, -34, 30 },
		{ 0, 0, 15 },
		{ 0, 0, 16 },
		{ 0, 28, 17 },
		{ 0, 38, 20 },
		{ 0, 0, 46 },
		{ 0, -39, 21 },
		{ 0, 14, 18 },
		{ 0, 28, 11 },
		{ 0, 0, 12 },
		{ 0, -44, 26 },
		{ 0, 35, 35 },
		{ 0, -42, 27 },
		{ 76, 0, 10 },
		{ 0, -54, 31 },
		{ 76, -93, 10 },
		{ 76, -95, 10 },
		{ 76, -90, 10 },
		{ 76, -96, 10 },
		{ 76, -96, 10 },
		{ 76, -76, 10 },
		{ 0, 0, 13 },
		{ 0, -58, 32 },
		{ 0, 0, 14 },
		{ 0, 0, 29 },
		{ 0, 0, 40 },
		{ 0, 0, 33 },
		{ 0, 0, 43 },
		{ 0, 0, 38 },
		{ 0, 0, 36 },
		{ 0, 0, 37 },
		{ 56, 10, 0 },
		{ -38, 49, 2 },
		{ 0, 0, 39 },
		{ 0, -1, 23 },
		{ 0, 0, 24 },
		{ 0, 0, 28 },
		{ 0, 0, 25 },
		{ 0, 1, 22 },
		{ 0, 0, 44 },
		{ 76, -33, 10 },
		{ 76, -50, 10 },
		{ 76, -47, 10 },
		{ 76, 0, 5 },
		{ 76, -48, 10 },
		{ 76, -36, 10 },
		{ 76, -35, 10 },
		{ 0, 0, 45 },
		{ 0, 0, 34 },
		{ -55, 29, 0 },
		{ -37, 16, 0 },
		{ 0, 0, 41 },
		{ 0, 0, 42 },
		{ 76, -41, 10 },
		{ 76, -27, 10 },
		{ 76, 0, 8 },
		{ 76, 0, 3 },
		{ 76, -29, 10 },
		{ 76, -20, 10 },
		{ -55, -32, 0 },
		{ 72, 0, 2 },
		{ 76, 0, 4 },
		{ 76, 0, 6 },
		{ 76, -9, 10 },
		{ 76, -9, 10 },
		{ 0, 0, 2 },
		{ 73, 48, 0 },
		{ -72, 8, 0 },
		{ 76, -6, 10 },
		{ 76, 0, 7 },
		{ 0, 70, 9 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 138 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	if (lexer.yycreate()) 
	{
		lexer.yyin = new std::ifstream("b.txt");
		cout << "单词\t\t词素\t\t属性" << endl;
		
		if (!lexer.yyin->fail())
		{
			n = lexer.yylex();
		}
	}
	
	system("pause");
	
	return n;
}


