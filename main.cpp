#include <bits/stdc++.h>

int main(int argc, char* argv[]) {

    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    /* get the test_case */
    size_t test_case;
    std::cin >> test_case;

    /* navigate through each test_case */
    while (test_case--) {

        /* get the first_number and second_number */
        size_t first_number, second_number;
        std::cin >> first_number >> second_number;

        /* get the remainder value */
        size_t remainder {first_number % second_number};

        /* print the remainder */
        std::cout << remainder << std::endl;
    }
    return 0;
}