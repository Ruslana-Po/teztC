#define BOOST_TEST_MODULE  QueueTest
#include <boost/test/included/unit_test.hpp>
#include "../3 laba/queue.h"
BOOST_AUTO_TEST_CASE(test_push_queue) {
    Queue queue;
    queue.push("Alice");
    
    BOOST_REQUIRE_EQUAL(!queue.isEmpty(),true);  
}
BOOST_AUTO_TEST_CASE(test_pop_queue) {
    Queue queue;
    queue.push("Alice");
    queue.push("Bob");
    queue.pop();
    BOOST_REQUIRE_EQUAL(!queue.isEmpty(),true);
    queue.pop();  
    BOOST_REQUIRE_EQUAL(queue.isEmpty(),true);
}
BOOST_AUTO_TEST_CASE(test_empty_queue) {
    Queue queue;
    BOOST_REQUIRE_EQUAL(queue.isEmpty(),true);
}
