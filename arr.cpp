#define BOOST_TEST_MODULE  ArrTest
#include <boost/test/included/unit_test.hpp>
#include "../3 laba/arr.h"
BOOST_AUTO_TEST_CASE(test_push_end) {
    DynamicArray arr(5);
    arr.AddArr("Alice");
    arr.AddArr("Bob");
    string znach=arr.returnItemByIndex(0);
    // Проверка получения значений
    BOOST_CHECK_EQUAL(znach, "Alice");
    znach=arr.returnItemByIndex(1);
    BOOST_CHECK_EQUAL(znach, "Bob");
}

BOOST_AUTO_TEST_CASE(test_push_index) {
    DynamicArray arr(5);
    arr.AddArr("Alice");
    string znach=arr.returnItemByIndex(0);
    // Проверка получения значений
    BOOST_CHECK_EQUAL(znach, "Alice");
    arr.AddAtIndex(0, "Bob");
    znach=arr.returnItemByIndex(0);
    BOOST_CHECK_EQUAL(znach, "Bob");
    znach=arr.returnItemByIndex(1);
    BOOST_CHECK_EQUAL(znach, "Alice");
    arr.AddAtIndex(7, "Bob");
    znach=arr.returnItemByIndex(7);
    BOOST_CHECK_EQUAL(znach, "Индекс вне диапазона!");
}

BOOST_AUTO_TEST_CASE(test_pop_index) {
    DynamicArray arr(1);
    arr.AddArr("Alice");
    arr.AddArr("Bob");
    string znach=arr.returnItemByIndex(0);
    // Проверка получения значений
    BOOST_CHECK_EQUAL(znach, "Alice");
    znach=arr.returnItemByIndex(1);
    BOOST_CHECK_EQUAL(znach, "Bob");
    //del
    arr.removeItemByIndex(0);
    znach=arr.returnItemByIndex(0);
    BOOST_CHECK_EQUAL(znach, "Bob");
     arr.removeItemByIndex(7);
     znach=arr.returnItemByIndex(7);
    BOOST_CHECK_EQUAL(znach, "Индекс вне диапазона!");

}

BOOST_AUTO_TEST_CASE(test_replace_index) {
    DynamicArray arr(5);
    arr.AddArr("Alice");
    arr.AddArr("Bob");
    string znach=arr.returnItemByIndex(0);
    // Проверка получения значений
    BOOST_CHECK_EQUAL(znach, "Alice");
    znach=arr.returnItemByIndex(1);
    BOOST_CHECK_EQUAL(znach, "Bob");
    //del
    arr.replaceItemByIndex(0,"Rusy");
    znach=arr.returnItemByIndex(0);
    BOOST_CHECK_EQUAL(znach, "Rusy");
}
BOOST_AUTO_TEST_CASE(test_size) {
    DynamicArray arr(5);
    int size=arr.Size();
    //Пуст ли
    BOOST_CHECK_EQUAL(size,0);
}
