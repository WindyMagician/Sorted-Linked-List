#include "sortedSingle.h"
#include "..\\catch_amalgamated.hpp"
#include <sstream>
#include <iostream>

using namespace std;

//test cases for part a

TEST_CASE("sortedSingle::sortedSingle - constructor test")
{
    sortedSingle mylist;

    CHECK(mylist.empty() == true);
    CHECK(mylist.size() == 0);
}


TEST_CASE("sortedSingle::~sortedSingle - deconstructor test")
{
    sortedSingle list;
    int item = 91;
    bool answer;

    list.insert(10);
    list.insert(51);
    list.insert(25);
    list.insert(91);
    list.insert(12);

    answer = list.find(item);

    CHECK(answer == true);
    //test passes, confirmed by writing success to screen
}


TEST_CASE("sortedSingle::find - item found")
{
    sortedSingle list;
    int item = 91;
    bool answer;

    list.insert(10);
    list.insert(51);
    list.insert(25);
    list.insert(91);
    list.insert(12);

    answer = list.find(item);

    CHECK(answer == true);
}


TEST_CASE("sortedSingle::find - item not found")
{
    sortedSingle list;
    int item = 28;
    bool answer;

    list.insert(12);
    list.insert(53);
    list.insert(851);
    list.insert(2);
    list.insert(0);

    answer = list.find(item);

    CHECK(answer == false);
}


TEST_CASE("sortedSingle::find - item in longer list")
{
    sortedSingle list;
    int item = 9202;
    bool answer;

    list.insert(25);
    list.insert(2533);
    list.insert(851);
    list.insert(92);
    list.insert(2643);
    list.insert(23);
    list.insert(9202);
    list.insert(1242);
    list.insert(0);
    list.insert(2532);
    list.insert(8231);

    answer = list.find(item);

    CHECK(answer == true);
}


TEST_CASE("sortedSingle::retrievePosition - found item")
{
    sortedSingle list;
    int item = 12;
    int answer;

    list.insert(12);
    list.insert(53);
    list.insert(851);
    list.insert(2);
    list.insert(0);

    answer = list.retrievePosition(item);

    CHECK(answer == 3);
}


TEST_CASE("sortedSingle::retrievePosition - not found")
{
    sortedSingle list;
    int item = 12;
    int answer;

    list.insert(63);
    list.insert(53);
    list.insert(851);
    list.insert(2);
    list.insert(0);

    answer = list.retrievePosition(item);

    CHECK(answer == 0);
}


TEST_CASE("sortedSingle::retrievePosition - found at end")
{
    sortedSingle list;
    int item = 1221;
    int answer;

    list.insert(12);
    list.insert(53);
    list.insert(851);
    list.insert(2);
    list.insert(1221);

    answer = list.retrievePosition(item);

    CHECK(answer == 5);
}


TEST_CASE("sortedSingle::retrievePosition - found at beginning")
{
    sortedSingle list;
    int item = 8;
    int answer;

    list.insert(8);
    list.insert(53);
    list.insert(851);
    list.insert(2);
    list.insert(0);

    answer = list.retrievePosition(item);

    CHECK(answer == 3);
}


TEST_CASE("sortedSingle::size - size is 19")
{
    sortedSingle list;
    int size;

    list.insert(8);
    list.insert(53);
    list.insert(851);
    list.insert(2);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);
    list.insert(0);

    size = list.size();

    CHECK(size == 20);
}


TEST_CASE("sortedSingle::size - size is 0")
{
    sortedSingle list;
    int size;

    size = list.size();

    CHECK(size == 0);
}


TEST_CASE("sortedSingle::size - size is 2")
{
    sortedSingle list;
    int size;

    list.insert(8);
    list.insert(53);

    size = list.size();

    CHECK(size == 2);
}


TEST_CASE("sortedSingle::size - size is 10 with dupes")
{
    sortedSingle list;
    int size;

    list.insert(8);
    list.insert(53);
    list.insert(851);
    list.insert(2);
    list.insert(0);
    list.insert(8);
    list.insert(53);
    list.insert(851);
    list.insert(2);
    list.insert(0);

    size = list.size();

    CHECK(size == 10);
}


TEST_CASE("sortedSingle::size - size is 8")
{
    sortedSingle list;
    int size;

    list.insert(8);
    list.insert(53);
    list.insert(851);
    list.insert(2);
    list.insert(85);
    list.insert(26);
    list.insert(235);
    list.insert(92);

    size = list.size();

    CHECK(size == 8);
}


TEST_CASE("sortedSingle::empty - contains 12 item")
{
    sortedSingle list;
    bool answer;

    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);

    answer = list.empty();

    CHECK(answer == false);
}


TEST_CASE("sortedSingle::empty - contains 1 item")
{
    sortedSingle list;
    bool answer;

    list.insert(8);
    answer = list.empty();

    CHECK(answer == false);
}


TEST_CASE("sortedSingle::empty - contains 0 items")
{
    sortedSingle list;
    bool answer;

    answer = list.empty();

    CHECK(answer == true);
}


TEST_CASE("sortedSingle::empty - contains 20 items")
{
    sortedSingle list;
    bool answer;

    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    list.insert(8);
    answer = list.empty();

    CHECK(answer == false);
}


TEST_CASE("sortedSingle::empty - contains 2 items")
{
    sortedSingle list;
    bool answer;

    list.insert(8);
    list.insert(8);
    answer = list.empty();

    CHECK(answer == false);
}


TEST_CASE("sortedSingle::empty - contains no items")
{
    sortedSingle list;
    bool answer;

    answer = list.empty();

    CHECK(answer == true);
}


// test cases for part b


TEST_CASE("sortedSingle::print - printed 11 terms")
{
    sortedSingle list;
    ostream& stream = std::cout;

    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
}


TEST_CASE("sortedSingle::print - printed 2 terms")
{
    sortedSingle list;
    ostream& stream = std::cout;

    list.insert(12);
    list.insert(123412);
}


TEST_CASE("sortedSingle::print - printed 0 terms")
{
    sortedSingle list;
    ostream& stream = std::cout;
}


TEST_CASE("sortedSingle::print - printed 4 terms")
{
    sortedSingle list;
    ostream& stream = std::cout;

    list.insert(12345);
    list.insert(9423);
    list.insert(5123);
    list.insert(6321);
}


TEST_CASE("sortedSingle::print - printed 3 terms")
{
    sortedSingle list;
    ostream& stream = std::cout;

    list.insert(10);
    list.insert(100);
    list.insert(1000);
}


TEST_CASE("sortedSingle::print - printed 1 term")
{
    sortedSingle list;
    ostream& stream = std::cout;
    string seperator = ", ";

    list.insert(1);
}


TEST_CASE("sortedSingle::insert - inserted 8 terms")
{
    sortedSingle list;

    list.insert(8);
    list.insert(53);
    list.insert(851);
    list.insert(2);
    list.insert(85);
    list.insert(26);
    list.insert(235);
    list.insert(92);

    CHECK(list.size() == 8);
}


TEST_CASE("sortedSingle::insert - inserted 4 terms")
{
    sortedSingle list;

    list.insert(8);
    list.insert(53);
    list.insert(851);
    list.insert(2);

    CHECK(list.size() == 4);
}


TEST_CASE("sortedSingle::insert - inserted 20 terms")
{
    sortedSingle list;

    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);
    list.insert(50);

    CHECK(list.size() == 20);
}


TEST_CASE("sortedSingle::insert - inserted 1 term")
{
    sortedSingle list;

    CHECK(list.insert(92) == true);
}


TEST_CASE("sortedSingle::insert - inserted 2 terms")
{
    sortedSingle list;

    list.insert(2);
    list.insert(1);

    CHECK(list.size() == 2);
}


TEST_CASE("sortedSingle::remove - remove 85")
{
    sortedSingle list;
    ostream& stream = std::cout;

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);

    list.remove(1);
    //list.print(cout, ", ");

}


TEST_CASE("sortedSingle::remove - remove 2, list doesnt contain anything")
{
    sortedSingle list;
    
    bool remove = list.remove(2);
    CHECK(remove == false);
}


TEST_CASE("sortedSingle::remove - remove 912 from the end")
{
    sortedSingle list;
    ostream& stream = std::cout;

    list.insert(62);
    list.insert(262);
    list.insert(85);
    list.insert(912);

    list.remove(912);
}


TEST_CASE("sortedSingle::remove - remove 1 from a list of 1s")
{
    sortedSingle list;

    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);


    list.remove(1);

    CHECK(list.find(1));
    CHECK(list.size() == 12);
}


TEST_CASE("sortedSingle::remove - remove 30 from list of 10 numbers")
{
    sortedSingle list;

    list.insert(62);
    list.insert(262);
    list.insert(85);
    list.insert(912);
    list.insert(30);
    list.insert(1122);
    list.insert(5321);
    list.insert(5323);
    list.insert(2125);
    list.insert(5321);

    list.remove(30);

    CHECK(!list.find(30));
}


TEST_CASE("sortedSingle::remove - remove item that does not exist")
{
    sortedSingle list;
    ostream& stream = std::cout;

    list.insert(62);
    list.insert(262);
    list.insert(85);
    list.insert(912);

    bool remove = list.remove(6);
    CHECK(remove == false);
}


TEST_CASE("sortedSingle::clear - clear a list of 5 items")
{
    sortedSingle list;

    list.insert(1);
    list.insert(62);
    list.insert(262);
    list.insert(85);
    list.insert(912);

    list.clear();

    CHECK(list.empty());
}


TEST_CASE("sortedSingle::clear - clear a list of 2 items")
{
    sortedSingle list;

    list.insert(15);
    list.insert(2);

    list.clear();

    CHECK(list.empty());
}


TEST_CASE("sortedSingle::clear - clear a list of 0 items")
{
    sortedSingle list;

    list.clear();

    CHECK(list.empty());
}


TEST_CASE("sortedSingle::clear - clear a list of 1 item")
{
    sortedSingle list;

    list.insert(1);

    list.clear();

    CHECK(list.empty() == true);
}


TEST_CASE("sortedSingle::clear - clear a list of 50 items")
{
    sortedSingle list;

    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);
    list.insert(7);


    list.clear();

    CHECK(list.empty() == true);
}


TEST_CASE("sortedSingle::clear - clear a list of 3 items")
{
    sortedSingle list;

    list.insert(212);
    list.insert(8764);
    list.insert(0);

    list.clear();

    CHECK(list.empty() == true);
}

/*
TEST_CASE("sortedSingle::sortedSingle* - copy a small list of multiple items")
{
    sortedSingle list;

    list.insert(1);
    list.insert(2);
    list.insert(3);

    sortedSingle copyList(list);

    copyList.print(cout);
    CHECK(copyList.empty() == false);
}


TEST_CASE("sortedSingle::sortedSingle* - copy a list of no items")
{
    sortedSingle list;
    sortedSingle copyList(list);

    CHECK(copyList.empty() == true);
}


TEST_CASE("sortedSingle::sortedSingle* - copy a small list of much more items")
{
    sortedSingle list;

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);

    sortedSingle copyList(list);

    CHECK(copyList.size() == 42);
}


TEST_CASE("sortedSingle::sortedSingle* - copy a small list of one item")
{
    sortedSingle list;

    list.insert(1);

    sortedSingle copyList(list);

    CHECK(copyList.size() == 1);
}
*/
void value(sortedSingle l)
{
    l.size();
}

TEST_CASE("sortedSingle::sortedSingle1 - copy a small list of one item")
{
    sortedSingle list1;
    ostringstream sout;

    list1.insert(50);
    list1.insert(10);
    list1.insert(40);
    list1.insert(20);
    list1.insert(30);

    value(list1);
    sortedSingle copyList(list1);

    list1.print(sout);
    CHECK(sout.str() == "10, 20, 30, 40, 50");
    sout.str("");

    copyList.print(sout);
    CHECK(sout.str() == "10, 20, 30, 40, 50");

    CHECK(list1.size() == 5);
    CHECK(copyList.size() == 5);
}


TEST_CASE("sortedSingle::sortedSingle1 - copy a empty list of one item")
{
    sortedSingle list;
    ostringstream sout;

    sortedSingle copyList(list);

    value(list);
    copyList.print(sout);

    CHECK(sout.str() == "");
}
TEST_CASE("sortedSingle::sortedSingle1 - copy a one list of one item")
{
    sortedSingle list;
    ostringstream sout;

    list.insert(42);

    sortedSingle copyList(list);

    value(list);
    copyList.print(sout);

    CHECK(sout.str() == "42");
}