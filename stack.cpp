#define BOOST_TEST_MODULE StackTest
#include <boost/test/included/unit_test.hpp>
#include "../3 laba/stack.h"

BOOST_AUTO_TEST_CASE(test_push_stack) {
    Stack stack;
    stack.push("Alice");
    
    BOOST_REQUIRE_EQUAL(!stack.isEmpty(),true);  
}
BOOST_AUTO_TEST_CASE(test_pop_stack) {
    Stack stack;
    stack.push("Alice");
    stack.push("Bob");
    stack.pop();
    BOOST_REQUIRE_EQUAL(!stack.isEmpty(),true);
    stack.pop();  
    BOOST_REQUIRE_EQUAL(stack.isEmpty(),true);
    stack.pop();
}
BOOST_AUTO_TEST_CASE(test_empty_stack) {
    Stack stack;
    BOOST_REQUIRE_EQUAL(stack.isEmpty(),true);
}
