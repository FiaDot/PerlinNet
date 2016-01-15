#include <iostream>
#include <boost/asio.hpp>
#include <boost/random.hpp>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <mutex>
#include <thread>
#include <atomic>
#include <future>
#include <memory>
#include "include/echo.pb.h"


using namespace std;

int main() {
    cout << "hello" << endl;

    boost::random::mt19937 rng;
    boost::random::uniform_int_distribution<> six(1,5);

    cout << six(rng) << endl;

    // 프로토콜 버퍼 테스트
    tutorial::Echo data;
    data.set_msg("test");
    data.set_id(123);

    int size = data.ByteSize();
    cout << size << endl;

    return 0;
}