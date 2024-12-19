#include <iostream>
#include <list>

using namespace std;

// LIST
// Advantage: Inserting and deleting are fast
// Drawback: Traversing lists is slow

void displayRatings(const list<int> &playersRatings)
{
    for (list<int>::const_iterator it = playersRatings.begin(); it != playersRatings.end(); it++)
    {
        cout << "Player rating: " << *it << endl;
    }
}

void insertPlayerIntoOrderedList(int newPlayerRating, list<int> &playersByRating)
{
    for (list<int>::iterator it = playersByRating.begin(); it != playersByRating.end(); it++)
    {
        if (*it > newPlayerRating)
        {
            playersByRating.insert(it, newPlayerRating);
            return;
        }
    }
    playersByRating.push_back(newPlayerRating);
}

int main()
{
    // // Create a list
    // list<int> myList;

    // // Adding elements to the list
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_front(30);
    // myList.erase(myList.begin());

    // // Print elements of list using iterator
    // for (list<int>::iterator it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    list<int> allPlayers = {6, 7, 4, 5, 6, 7, 8};

    list<int> beginners; // rating 1-5
    list<int> pros;      // rating 6-10

    for (list<int>::iterator it = allPlayers.begin(); it != allPlayers.end(); it++)
    {
        int rating = *it;
        if (rating >= 1 && rating <= 5)
            insertPlayerIntoOrderedList(rating, beginners);
        else if (rating >= 6 && rating <= 10)
            insertPlayerIntoOrderedList(rating, pros);
    }

    cout << "Beginners: " << endl;
    displayRatings(beginners);
    cout << "Pros: " << endl;
    displayRatings(pros);

    return 0;
}