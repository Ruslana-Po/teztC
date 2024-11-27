#define BOOST_TEST_MODULE  HashTest
#include <boost/test/included/unit_test.hpp>
#include "../3 laba/hash.h"
BOOST_AUTO_TEST_CASE(test_insert_and_get) {
     HashTable hashTable;
    hashTable.AddHash("key1", "value1");
    hashTable.AddHash("key2", "value2");
    hashTable.AddHash("key3", "value3");
    string val=hashTable.KeyItem("key1");
    // Проверка получения значений
    BOOST_CHECK_EQUAL(val, "value1");
    
}

BOOST_AUTO_TEST_CASE(test_update_value) {
    HashTable hashTable;
    hashTable.AddHash("key1", "value1");
    hashTable.AddHash("key2", "value2");
    hashTable.AddHash("key3", "value3");
    string val=hashTable.KeyItem("key1");
    // Проверка получения значений
    BOOST_CHECK_EQUAL(val, "value1");
    //должен сказать что  ключ уже есть и не поменять
     hashTable.AddHash("key1", "3");
     val=hashTable.KeyItem("key1");
    // Проверка получения значений
    BOOST_CHECK_EQUAL(val, "value1");
}

BOOST_AUTO_TEST_CASE(test_remove) {
    HashTable hashTable;
    hashTable.AddHash("key1", "value1");
    hashTable.AddHash("key2", "value2");
    //Добавилось ли
    string val=hashTable.KeyItem("key1");
    // Проверка получения значений
    BOOST_CHECK_EQUAL(val, "value1");
    //Уд
    BOOST_CHECK(hashTable.DelValue("key1"));
    //Удалился ли?
    val=hashTable.KeyItem("key1");
    // Проверка получения значений
    BOOST_CHECK_EQUAL(val, "Пусто");
    //Все хорошо с другим значением?
    val=hashTable.KeyItem("key2");
    // Проверка получения значений
    BOOST_CHECK_EQUAL(val, "value2");

}

BOOST_AUTO_TEST_CASE(test_remove_non_existent) {
    HashTable hashTable;

    // Удаление несуществующего элемента
    BOOST_CHECK(!hashTable.DelValue("key1")); // Должно вернуть false
}

BOOST_AUTO_TEST_CASE(test_collision_handling) {
    HashTable hashTable;
    hashTable.AddHash("ab", "value1");
    hashTable.AddHash("ba", "value2");
    string value=hashTable.KeyItem("ab");
    BOOST_CHECK_EQUAL(value, "value1");
    value=hashTable.KeyItem("ba");
    BOOST_CHECK_EQUAL(value, "value2");
}
