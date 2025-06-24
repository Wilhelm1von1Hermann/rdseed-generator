// random number generator
unsafe extern "C" { fn RDSEEDgetInt() -> u32; }
fn get_rand_int() -> u32 {
    let result = unsafe { RDSEEDgetInt() };
    return result;
}
