#define BOOST_TEST_MODULE  TreeTest
#include <boost/test/included/unit_test.hpp>
#include "../3 laba/tree.h"
BOOST_AUTO_TEST_CASE(test_push) {
    BinaryTree tree;
    tree.add(5);
    tree.add(3);
    tree.add(7);
    int kol = tree.countElements();
    BOOST_CHECK_EQUAL(kol, 3);
}
BOOST_AUTO_TEST_CASE(test_find) {
    BinaryTree tree;
    tree.add(5);
    tree.add(3);
    BOOST_CHECK_EQUAL(tree.remove(5), true);
    BOOST_CHECK_EQUAL(tree.remove(3), true);
    BOOST_CHECK_EQUAL(!tree.remove(4), true);
}

BOOST_AUTO_TEST_CASE(test_bin) {
    BinaryTree tree;
    tree.add(5);
    tree.add(6);
    BOOST_CHECK_EQUAL(!tree.isComplete(), true);
    tree.add(3);
    BOOST_CHECK_EQUAL(tree.isComplete(), true);
}

BOOST_AUTO_TEST_CASE(test_emty) {
    BinaryTree tree;
    int kol = tree.countElements();
    BOOST_CHECK_EQUAL(kol, 0);
}


