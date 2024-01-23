static __externref_t mytable[0];

int main() {
    volatile __externref_t x;
    x = __builtin_wasm_ref_null_extern();
}
