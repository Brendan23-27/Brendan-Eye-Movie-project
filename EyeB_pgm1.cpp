
/* Brendan Eye
 CS 2010
 Program 1
 the purpose of this is to print an output baced on user input
 the program works by using the cout and cin funtions

"an adult ticket costs $11.50 "at a local movie theater, and a child's ticket is" $7.75. "The movie distributor keeps 20 percent"; of the
 revenue earned from ticket sales.The remaining 80 percent goes to the movie theater.
 the program takes the amount of adult tickets as input and outputs the cost for you and the box office and distrubuter respectively*/


#include <iostream>

#include <iomanip>

#include <string>

#include <stdexcept>

using namespace std;

int main()
{

	string movieTitle;

	float childTicketPrice = 7.75f;

	float adultTicketPrice = 11.50f;

	float adultTicketNum;

    float childTicketNum;

	try
	{
		cout << fixed << setprecision(2);

		cout << "What is the name of your movie?:";

		getline(cin, movieTitle);

		if (movieTitle.empty())
		{
			throw runtime_error("pleae input the name of a movie");
		}

		cout << "How many adult tickets are you buying?:";

		cin >> adultTicketNum;

		if (cin.fail())
		{
			throw runtime_error("invalid input please enter a number");
		}
	}

	catch (const runtime_error& inputError)
	{
		cout << "error " << inputError.what() << endl;

		return 1;
	}

	try
	{

		cout << "The " << adultTicketNum << " adult tickets will cost you $ " << adultTicketPrice * adultTicketNum << " for " << movieTitle << endl;

		cout << "How many child tickets are you buying?:";

		cin >> childTicketNum;


		if (cin.fail())
		{
			throw runtime_error("invalid input please enter a number");
		}
	}
		catch (const runtime_error& inputError)
		{
			cout << "error " << inputError.what() << endl;

			return 1;
		}

	float totalPrice = childTicketPrice * childTicketNum + adultTicketPrice * adultTicketNum;

	float movieProfit = totalPrice * 0.8f;

	float distributorProfit = totalPrice * 0.2f;

	cout << "The " << childTicketNum << " child tickets will cost you $" << childTicketPrice * childTicketNum << " for " << endl;

	cout << "The total price for " << movieTitle << " is $" << totalPrice << endl;

	cout << "The gross ticket profit for " << movieTitle << " will make $" << totalPrice << endl;

	cout << "The movie theater's profit is $" << movieProfit << endl;

	cout << "The distrubutor profit is $" << distributorProfit << endl; 
	
	

	return 0;
}

