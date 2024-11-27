#define BOOST_TEST_MODULE ListTest
#include <boost/test/included/unit_test.hpp>
#include "../3 laba/list.h"
BOOST_AUTO_TEST_CASE(test_push_end) {
    LinkedList list;
    list.AddToEnd("B");
    list.AddToEnd("C");
    list.AddToEnd("D");
    
    BOOST_REQUIRE_EQUAL(list.Quest("B"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("C"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("D"),true);
    BOOST_REQUIRE_EQUAL(!list.Quest("A"),true);
   
}

BOOST_AUTO_TEST_CASE(test_push_head) {
     LinkedList list;
     list.AddToHead("A");
     list.AddToHead("B");
    BOOST_REQUIRE_EQUAL(list.Quest("B"),true);
    BOOST_REQUIRE_EQUAL(!list.Quest("C"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("A"),true);
}

BOOST_AUTO_TEST_CASE(test_pop_front) {
     LinkedList list;
    list.AddToEnd("B");
    list.AddToEnd("C");
    
    list.DeleteToHead();
    BOOST_REQUIRE_EQUAL(!list.Quest("B"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("C"),true);
}

BOOST_AUTO_TEST_CASE(test_pop_end) {
     LinkedList list;
     list.AddToEnd("A");
    list.AddToEnd("B");
    list.AddToEnd("C");
    
    list.DeleteToEnd();
    BOOST_REQUIRE_EQUAL(list.Quest("B"),true);
    BOOST_REQUIRE_EQUAL(!list.Quest("C"),true);
    list.DeleteToEnd();
    list.DeleteToEnd();
    BOOST_REQUIRE_EQUAL(!list.Quest("B"),true);
}

BOOST_AUTO_TEST_CASE(test_pop_znach) {
     LinkedList list;
    list.AddToEnd("B");
    list.AddToEnd("C");
    list.AddToHead("A");
    list.DeleteValue("B");
    BOOST_REQUIRE_EQUAL(!list.Quest("B"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("C"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("A"),true);
    list.DeleteValue("A");
     BOOST_REQUIRE_EQUAL(!list.Quest("B"),true);
    BOOST_REQUIRE_EQUAL(list.Quest("C"),true);
    BOOST_REQUIRE_EQUAL(!list.Quest("A"),true);
     list.DeleteValue("R");
}

BOOST_AUTO_TEST_CASE(test_empty_list) {
   LinkedList list;
    BOOST_REQUIRE_EQUAL(!list.Quest("A"),true); 
}
