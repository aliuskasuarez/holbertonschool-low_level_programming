void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return;
    }

    int i, j, product;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            product = i * j;

            // Convert product to string and print it
            char buffer[4];
            int index = 0;

            if (product == 0) {
                buffer[index++] = '0';
            } else {
                int num = product;
                while (num > 0) {
                    buffer[index++] = (num % 10) + '0';
                    num /= 10;
                }
            }

            // Reverse the buffer to get the correct order
            for (int k = index - 1; k >= 0; k--) {
                custom_print(buffer[k]);
            }

            if (j < n) {
                custom_print(',');
                custom_print(' ');
            }
        }
        custom_print('\n');
    }
}
