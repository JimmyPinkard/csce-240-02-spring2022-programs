#include <iostream>
#include <chrono>
#include <string>

template<typename T>
int test(T n);

template<typename K, typename V>
int test(K n, V r);

void test_factorials();
void test_combos();

int main(int argc, char **argv)
{
    test_factorials();
    test_combos();
    return 0;
}

void test_factorials()
{
    test(5);
    test(-2);
    test(4.3);
}

void test_combos()
{
    test(6, 2);
    test(-2, 1);
    test(1, -2);
    test(4.3, 1);
    test(1, 4.3);
    test(2.5, 5.2);
}

template<typename T>
int test(T n)
{
    auto start = std::chrono::steady_clock::now();
    int code = system(("build/FactorialFun " + std::to_string(n)).c_str());
    auto end = std::chrono::steady_clock::now();
    auto time = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << time << " milliseconds" << std::endl;
    return code;
}

template<typename K, typename V>
int test(K n, V r)
{
    auto start = std::chrono::steady_clock::now();
    int code = system(("build/FactorialFun " + std::to_string(n) + " " + std::to_string(r)).c_str());
    auto end = std::chrono::steady_clock::now();
    auto time = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cout << time << " milliseconds" << std::endl;
    return code;
}