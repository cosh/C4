#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "c4_tests.h"
#include "KeyKeyValueStore.h"
#include <boost/any.hpp>

TEST(test_c4_basic_1) {
	assert(1 > 0);

	return 0;
}

TEST(test_c4_basic_2) {
        assert(1 > 0);

        return 0;
}

int main() {
        int err = 0;
        KeyKeyValueStore<boost::any> *c4;

        test_c4_basic_1(c4);
        test_c4_basic_2(c4);

        return err ? -1 : 0;
}

