#pragma once

#include "symbols.h"
#include "token.h"

namespace cflat
{

	class Exception
	{
	public:
		Exception(int type, int exprn, Token* token);
		virtual		~Exception(void) {};
		int			getType() { return type; }
		Token*		gettoken() { return token; }
		int			getexprnum() { return exprnum; }
		const char*	toString() { return exceptions_s[type]; }
	private:
		int type;
		int exprnum;
		Token* token;
	};

}