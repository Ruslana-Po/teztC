#define BOOST_TEST_MODULE TwoListTest
#include <boost/test/included/unit_test.hpp>
#include "../3 laba/twolist.h"
BOOST_AUTO_TEST_CASE(test_push_end) {
    DoublyLinkedList list;
    list.AddToEnd("B");
    list.AddToEnd("C");
    
    BOOST_REQUIRE_EQUAL(list.Quest("B"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("C"),true);
    BOOST_REQUIRE_EQUAL(!list.Quest("A"),true);
   
}

BOOST_AUTO_TEST_CASE(test_push_head) {
     DoublyLinkedList list;
     list.AddToHead("A");
     list.AddToHead("B");
    BOOST_REQUIRE_EQUAL(list.Quest("B"),true);
    BOOST_REQUIRE_EQUAL(!list.Quest("C"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("A"),true);
}

BOOST_AUTO_TEST_CASE(test_pop_front) {
    DoublyLinkedList list;
    list.AddToEnd("B");
    list.AddToEnd("C");
    
    list.DeleteToHead();
    BOOST_REQUIRE_EQUAL(!list.Quest("B"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("C"),true);
}

BOOST_AUTO_TEST_CASE(test_pop_end) {
    DoublyLinkedList list;
    list.AddToEnd("B");
    list.AddToEnd("C");
    
    list.DeleteToEnd();
    BOOST_REQUIRE_EQUAL(list.Quest("B"),true);
    BOOST_REQUIRE_EQUAL(!list.Quest("C"),true);
}

BOOST_AUTO_TEST_CASE(test_pop_znach) {
    DoublyLinkedList list;
    list.AddToEnd("B");
    list.AddToEnd("C");
    list.AddToHead("A");
    list.DeleteValue("B");
    BOOST_REQUIRE_EQUAL(!list.Quest("B"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("C"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("A"),true);
}

BOOST_AUTO_TEST_CASE(test_empty_list) {
    DoublyLinkedList list;
    BOOST_REQUIRE_EQUAL(!list.Quest("A"),true); 
}
