#include <iostream>
#include "Perev.h"

using namespace std;

void FU()
{
	cout << "unexpected error! - bad_exception" << endl;
	throw;
}
void FT()
{
	cout << "unknown error! - terminate" << endl;
	abort();
}

int main()
{
	set_unexpected(FU);
	set_terminate(FT);
	Perev a;
	try
	{
		cin >> a;
		a.Display(2);
	}
	catch (Empty)
	{
		cout << " catch (Empty) " << endl;
	}
	catch (Error e)
	{
		cout << " catch (Error)  " << endl;
		cout << e.what() << endl;
	}
	catch (bad_exception)
	{
		cout << " catch (bad_exception)" << endl;
	}
	catch (exception)
	{
	 cout << " catch (exception) <= IsVysokosny6() :" << endl;
	}
	catch (Error1 e)
	{
	 cout << " catch (E) <= IsVysokosny6() :" << endl;
	 cout << e.What() << endl;
	}
	
	return 0;
}